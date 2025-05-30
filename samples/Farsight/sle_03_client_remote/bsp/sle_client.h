/*
 * Copyright (c) 2024 HiSilicon Technologies CO., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SLE_CLIENT_H
#define SLE_CLIENT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sle_ssap_client.h"
#include "common_def.h"
#include "soc_osal.h"
#include "securec.h"
#include "product.h"
#include "bts_le_gap.h"
#include "uart.h"
#include "pinctrl.h"
#include "sle_device_discovery.h"
#include "sle_connection_manager.h"

extern ssapc_write_param_t g_sle_send_param;
extern uint16_t g_sle_uart_conn_id;
void sle_client_init(void);

void sle_uart_start_scan(void);

void sle_uart_notification_cb(uint8_t client_id, uint16_t conn_id, ssapc_handle_value_t *data, errcode_t status);
void sle_uart_indication_cb(uint8_t client_id, uint16_t conn_id, ssapc_handle_value_t *data, errcode_t status);
void app_uart_init_config(void);

#endif