set(SOURCES_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}/bms_slave_task/bms_slave.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_server/sle_hybrid.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_server/sle_uuid_server.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_server/sle_uuid_client.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_server/sle_callbacks.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_server/sle_server_adv.c
    
)

# 设置头文件目录列表
# 包含各个模块的头文件路径
set(HEADER_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_server
    ${CMAKE_CURRENT_SOURCE_DIR}/bms_slave_task
)

# 将本目录的源文件添加到父作用域的SOURCES变量
# 将本目录的头文件路径添加到父作用域的PUBLIC_HEADER变量
set(SOURCES "${SOURCES}" ${SOURCES_LIST} PARENT_SCOPE)
set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)
