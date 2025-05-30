/**
 * @file mqtt_demo.c
 * @brief MQTT客户端示例程序
 * @details 实现了MQTT客户端的基本功能，包括：
 *          - 连接到华为云IoT平台
 *          - 订阅和发布消息
 *          - 环境数据采集和上报
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 引入MQTT和操作系统相关头文件
#include "MQTTClient.h"
#include "MQTTClientPersistence.h"
#include "osal_debug.h"
#include "MQTTClient.h"
#include "los_memory.h"
#include "los_task.h"
#include "soc_osal.h"
#include "app_init.h"
#include "common_def.h"
#include "wifi_connect.h"
#include "watchdog.h"
#include "cjson_demo.h"
#include "mqtt_demo.h"
#include "l610.h"
#include "sle_client.h"

// ======================== 配置参数 ========================

// MQTT服务器连接地址（华为云IoT平台）
#define ADDRESS "tcp://2502007d6f.st1.iotda-device.cn-north-4.myhuaweicloud.com"
// 客户端ID，用于唯一标识设备
#define CLIENTID "680b91649314d11851158e8d_Battery01_0_0_2025042603"
// 服务质量等级：1表示至少发送一次
#define QOS 1

// // WiFi配置信息
extern char g_wifi_ssid[MAX_WIFI_SSID_LEN]; // 默认SSID
extern char g_wifi_pwd[MAX_WIFI_PASSWORD_LEN]; // 默认密码

// char g_wifi_ssid[MAX_WIFI_SSID_LEN] = "QQ"; // 默认SSID
// char g_wifi_pwd[MAX_WIFI_PASSWORD_LEN] = "tangyuan"; // 默认密码

// 任务相关配置
#define MQTT_STA_TASK_PRIO 24           // MQTT任务优先级
#define MQTT_STA_TASK_STACK_SIZE 0x2000 // MQTT任务栈大小
#define TIMEOUT 10000L                  // 超时时间：10秒

// ======================== 全局变量定义 ========================

/**
 * @brief 全局变量定义
 */
volatile MQTTClient_deliveryToken deliveredtoken;  // 消息投递令牌
// 设备认证信息
char *g_username = "680b91649314d11851158e8d_Battery01"; // 设备ID
char *g_password = "50f670e657058bb33c23b92a633720a7fbbfba36f493f263c346b55bb2fb8bf3"; // 设备密码
static MQTTClient client = NULL;                      // MQTT客户端实例
extern int MQTTClient_init(void);       // MQTT客户端初始化函数声明
volatile environment_msg g_env_msg; // 全局环境数据变量
volatile MQTT_msg g_cmd_msg;        // 全局命令消息变量
volatile int g_cmd_msg_flag = 0;    // 命令消息标志

// ======================== 回调函数实现 ========================

/**
 * @brief 消息投递回调函数
 * @param context 上下文信息（未使用）
 * @param dt 投递令牌
 * @details 当消息成功投递到MQTT服务器时被调用
 */
void delivered(void *context, MQTTClient_deliveryToken dt)
{
    unused(context);
    printf("Message with token value %d delivery confirmed\r\n", dt);
    deliveredtoken = dt;
}

/**
 * @brief 消息到达回调函数
 * @param context 上下文信息（未使用）
 * @param topic_name 消息主题
 * @param topic_len 主题长度
 * @param message MQTT消息结构体
 * @return 1表示成功处理，-1表示处理失败
 * @note 该函数负责处理接收到的MQTT消息，并将消息写入消息队列
 */
int msgArrved(void *context, char *topic_name, int topic_len, MQTTClient_message *message)
{
    unused(context);
    unused(topic_len);
    // 直接写入全局命令变量
    memset((void*)&g_cmd_msg, 0, sizeof(MQTT_msg));
    // 安全拷贝payload内容，防止悬挂指针
    if (message && message->payload && message->payloadlen > 0) {
        size_t copy_len = sizeof(g_cmd_msg.receive_payload) - 1;
        if ((size_t)message->payloadlen < copy_len) copy_len = message->payloadlen;
        memcpy(g_cmd_msg.receive_payload, message->payload, copy_len);
        g_cmd_msg.receive_payload[copy_len] = '\0';
    } else {
        g_cmd_msg.receive_payload[0] = '\0';
    }
    g_cmd_msg_flag = 1; // 标记有新命令
    printf("mqtt_message_arrive() success, the topic is %s, the payload is %s \n", topic_name, g_cmd_msg.receive_payload);
    return 1;
}

/**
 * @brief MQTT连接断开回调函数
 * @param context 上下文信息（未使用）
 * @param cause 断开连接的原因
 * @details 当MQTT连接丢失时被调用
 */
void connlost(void *context, char *cause)
{
    unused(context);
    printf("mqtt_connection_lost() error, cause: %s\n", cause);
}

// ======================== MQTT操作函数 ========================

/**
 * @brief 直接发布环境数据到MQTT
 * @param topic 发布的主题
 * @return MQTTCLIENT_SUCCESS表示成功，其他值表示失败
 * @note 直接使用全局环境数据g_env_msg，无需中间结构体
 */
int mqtt_publish_env(const char *topic)
{
    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    MQTTClient_deliveryToken token;
    int rc = 0;
    char json[512]; // 增加缓冲区大小以容纳更多数据
      // 直接使用g_env_msg数据构建JSON
    snprintf(json, sizeof(json),
        "{\"services\":[{\"service_id\":\"ws63\",\"properties\":{\"temperature\":[%.2f,%.2f,%.2f,%.2f,%.2f],\"current\":%.2f,\"total_voltage\":%.2f,\"cell_voltages\":[%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f],\"Switch\":false}}]}",
        g_env_msg.temperature[0], g_env_msg.temperature[1],
        g_env_msg.temperature[2], g_env_msg.temperature[3],
        g_env_msg.temperature[4], g_env_msg.current,
        g_env_msg.total_voltage,
        g_env_msg.cell_voltages[0], g_env_msg.cell_voltages[1], g_env_msg.cell_voltages[2],
        g_env_msg.cell_voltages[3], g_env_msg.cell_voltages[4], g_env_msg.cell_voltages[5],
        g_env_msg.cell_voltages[6], g_env_msg.cell_voltages[7], g_env_msg.cell_voltages[8],
        g_env_msg.cell_voltages[9], g_env_msg.cell_voltages[10], g_env_msg.cell_voltages[11]);
    
    pubmsg.payload = json;
    pubmsg.payloadlen = (int)strlen(json);
    pubmsg.qos = QOS;
    pubmsg.retained = 0;
    
    rc = MQTTClient_publishMessage(client, topic, &pubmsg, &token);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("mqtt_publish_env failed\r\n");
    }
    printf("mqtt_publish_env(), the payload is %s, the topic is %s\r\n", json, topic);
    return rc;
}

/**
 * @brief 订阅MQTT主题
 * @param topic 要订阅的主题
 * @return 0表示成功，其他值表示失败
 */
int mqtt_subscribe(const char *topic)
{
    printf("subscribe start\r\n");
    int rc = MQTTClient_subscribe(client, topic, QOS);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("Failed to subscribe, return code %d\n", rc);
        return -1;
    }
    printf("Subscribe success\r\n");
    return rc;
}

/**
 * @brief 连接MQTT服务器
 * @return MQTTCLIENT_SUCCESS表示成功，-1表示失败
 * @note 该函数会初始化MQTT客户端，设置连接参数并建立连接
 *       同时会注册消息回调函数用于处理收到的消息
 */
int mqtt_connect(void)
{
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    int rc;
    int retry = 0;
    printf("start mqtt sync subscribe...\r\n");
    do {
        rc = MQTTClient_create(&client, ADDRESS, CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
        if (rc == MQTTCLIENT_SUCCESS) break;
        printf("MQTTClient_create failed, rc=%d, retry %d\n", rc, retry);
        osal_msleep(1000);
    } while (++retry < 3);
    if (rc != MQTTCLIENT_SUCCESS) {
        client = NULL;
        return -1;
    }
    conn_opts.keepAliveInterval = 120; // 保持间隔为120秒，每120秒发送一次消息
    conn_opts.cleansession = 1;
    if (g_username != NULL) {
        conn_opts.username = g_username;
        conn_opts.password = g_password;
    }
    // 设置回调函数
    MQTTClient_setCallbacks(client, NULL, connlost, msgArrved, delivered);
    retry = 0;
    do {
        rc = MQTTClient_connect(client, &conn_opts);
        if (rc == MQTTCLIENT_SUCCESS) break;
        printf("Failed to connect, return code %d, retry %d\n", rc, retry);
        osal_msleep(1000);
    } while (++retry < 3);
    if (rc != MQTTCLIENT_SUCCESS) {
        MQTTClient_destroy(&client);
        client = NULL;
        return -1;
    }
    printf("connect success\r\n");
    return rc;
}

// ======================== 网络切换流程 ========================

static net_type_t current_net = NET_TYPE_WIFI;

// 切换到WiFi
int switch_to_wifi(const char *ssid, const char *psk)
{
    // 切换前彻底释放旧的MQTT client，防止资源泄漏
    if (client != NULL) {
        // 解绑回调，防止回调悬挂
        MQTTClient_setCallbacks(client, NULL, NULL, NULL, NULL);
        MQTTClient_disconnect(client, 1000);
        MQTTClient_destroy(&client);
        client = NULL;
        osal_msleep(500); // 等待资源彻底释放
    }

    wifi_disconnect(); // 确保断开WiFi连接

    printf("[网络切换] 连接WiFi: SSID=%s\\n", ssid);
    if (wifi_connect(ssid, psk) == 0) {
        // WiFi连接成功后，建立MQTT连接
        if (mqtt_connect() == 0) {
            // 重新订阅命令topic
            char *cmd_topic = combine_strings(3, "$oc/devices/", g_username, "/sys/commands/#");
            if (cmd_topic) {
                mqtt_subscribe(cmd_topic);
                free(cmd_topic);
            }
            printf("[网络切换] MQTT连接和订阅成功\n");
        } else {
            printf("[网络切换] MQTT连接失败\n");
        }
        if (current_net == NET_TYPE_4G) {
        printf("[网络切换] 断开4G，准备连接WiFi...\n");
        L610_Detach(1);         // 断开4G
        }
        current_net = NET_TYPE_WIFI;
        return 1;
    } else {
        printf("[网络切换] WiFi连接失败\n");
        return 0;
    }
}

// 切换到4G
void switch_to_4g(void)
{
    if (current_net == NET_TYPE_WIFI) {
        printf("[网络切换] 断开WiFi，准备连接4G...\n");
        wifi_disconnect();      // 断开WiFi
    }
    printf("[网络切换] 连接4G\n");
    L610_Attach(1, 1);         // 连接4G
    L610_HuaweiCloudConnect(
        "117.78.5.125", // ip
        "1883",         // port
        "680b91649314d11851158e8d_Battery01", // clientid
        "12345678",     // password
        60,              // keepalive
        0                // cleanSession
    );
    current_net = NET_TYPE_4G;
    printf("[网络切换] 已切换到4G\n");
}

// ======================== 任务实现 ========================

/**
 * @brief MQTT任务主函数
 * @return 执行结果，0表示成功，其他值表示失败
 * @note 该任务负责：
 *       1. 连接WiFi网络
 *       2. 建立MQTT连接
 *       3. 订阅命令主题
 *       4. 处理消息队列中的数据
 */
int mqtt_task(void)
{
    app_uart_init_config();// 初始化4G串口
    int ret = 0;
    char *beep_status = NULL;
    int loop_counter = 0; // 循环计数器，用于控制WiFi检查间隔
    int wifi_retry_counter = 0; // WiFi重试计数器
    
    // 连接WiFi
    if (wifi_connect(g_wifi_ssid, g_wifi_pwd) != 0) {
        printf("wifi connect failed\\n");
        // WiFi连接失败，切换到4G
        switch_to_4g();
    }else{
        // 连接MQTT服务器
        ret = mqtt_connect();
        if (ret != 0) {
            printf("connect failed, result %d\n", ret);
        }
        osal_msleep(1000); // 等待连接成功
        // 组合命令主题字符串
        char *cmd_topic = combine_strings(3, "$oc/devices/", g_username, "/sys/commands/#");
        if (cmd_topic) {
            ret = mqtt_subscribe(cmd_topic);
            free(cmd_topic);
        } else {
            printf("combine_strings failed for cmd_topic\n");
        }
    }
    
    // 组合上报主题字符串
    char *report_topic = combine_strings(3, "$oc/devices/", g_username, "/sys/properties/report");
    if (!report_topic) {
        printf("combine_strings failed for report_topic\n");
        return -1;
    }

    while (1) {
        // 处理下发命令
        if (g_cmd_msg_flag) {
            if (g_cmd_msg.receive_payload[0] != '\0') {
                beep_status = parse_json(g_cmd_msg.receive_payload);
            } else {
                printf("Warning: receive_payload is empty, skip parse_json\n");
            }
            g_cmd_msg_flag = 0;
        }
        
        // 智能网络管理逻辑
        if (loop_counter % 10 == 0) {  // 每10秒检查一次网络状态
            if (current_net == NET_TYPE_4G) {
                // 当前是4G模式，检查WiFi是否可用
                if (switch_to_wifi(g_wifi_ssid, g_wifi_pwd) == 1) {
                    printf("[网络管理] 成功连接并切换到WiFi模式\\n");
                } else {
                    printf("[网络管理] 连接WiFi失败，继续使用4G\\n");
                }
            }
        }
        
        // 根据当前网络类型选择上报方式
        if (current_net == NET_TYPE_WIFI && report_topic) {
            if (!check_wifi_status()) {
                    printf("[网络管理] WiFi发布失败且WiFi已断开，切换到4G模式\n");
                    switch_to_4g();
                    continue; // 跳过本次循环，等待4G连接
                }
            // WiFi网络使用MQTT Client上报
            if (mqtt_publish_env(report_topic) != MQTTCLIENT_SUCCESS) {
                printf("WiFi MQTT publish failed\r\n");
                // 发布失败，可能是WiFi连接问题，检查WiFi状态
                
            } else {
                printf("WiFi MQTT publish success\r\n");
            }        
        } else if (current_net == NET_TYPE_4G) {
            // 4G网络使用L610模块上报
            char payload[512]; // 增加缓冲区大小以容纳更多数据            
            
            snprintf(payload, sizeof(payload),
                "{\"services\":[{\"service_id\":\"ws63\",\"properties\":{\"temperature\":[%.2f,%.2f,%.2f,%.2f,%.2f],\"current\":%.2f,\"total_voltage\":%.2f,\"cell_voltages\":[%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f],\"Switch\":false}}]}",
                g_env_msg.temperature[0], g_env_msg.temperature[1], g_env_msg.temperature[2], g_env_msg.temperature[3], g_env_msg.temperature[4],
                g_env_msg.current, g_env_msg.total_voltage,
                g_env_msg.cell_voltages[0], g_env_msg.cell_voltages[1], g_env_msg.cell_voltages[2],
                g_env_msg.cell_voltages[3], g_env_msg.cell_voltages[4], g_env_msg.cell_voltages[5],
                g_env_msg.cell_voltages[6], g_env_msg.cell_voltages[7], g_env_msg.cell_voltages[8],
                g_env_msg.cell_voltages[9], g_env_msg.cell_voltages[10], g_env_msg.cell_voltages[11]);
            L610_HuaweiCloudReport(
                "$oc/devices/680b91649314d11851158e8d_Battery01/sys/properties/report",
                payload);
            printf("[HUAWEI CLOUD] 4G report: %s\r\n", payload);
        } else {
            printf("Warning: report_topic is NULL or network type unknown, skip publish\n");
        }

        osal_msleep(1000);
        loop_counter++;
    }
    
    return ret;
}

// ======================== MQTT示例程序入口函数 ========================
/**
 * @brief MQTT示例程序入口函数
 * @note 该函数负责：
 *       1. 创建消息队列
 *       2. 创建MQTT任务和环境数据采集任务
 *       3. 设置任务优先级
 */
static void mqtt_sample_entry(void)
{
    uint32_t ret;
    // 禁用看门狗，防止开发阶段重启
    uapi_watchdog_disable();
    osal_task *task_handle = NULL;
    // 初始化全局结构体，防止野指针
    memset((void*)&g_env_msg, 0, sizeof(g_env_msg));
    memset((void*)&g_cmd_msg, 0, sizeof(g_cmd_msg));
    MQTTClient_init(); // 只在入口初始化一次
    // 加锁，防止多线程冲突
    
    osal_kthread_lock();
    // 创建MQTT主任务
    task_handle = osal_kthread_create((osal_kthread_handler)mqtt_task, 0, "MqttDemoTask", MQTT_STA_TASK_STACK_SIZE);
    if (task_handle != NULL) {
        osal_kthread_set_priority(task_handle, MQTT_STA_TASK_PRIO);
        osal_kfree(task_handle);
    }
    // 解锁
    osal_kthread_unlock();
}

/* 入口点：通过app_run启动mqtt_sample_entry */
app_run(mqtt_sample_entry);