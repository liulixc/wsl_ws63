#===============================================================================
# @brief    cmake file
# Copyright (c) CompanyNameMagicTag 2023-2023. All rights reserved.
#===============================================================================
if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_UART_SERVER_1_VS_8)
set(SOURCES_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_uart_server/sle_uart_server_adv.c
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_uart_server/sle_uart_server.c
)
set(HEADER_LIST ${CMAKE_CURRENT_SOURCE_DIR}/sle_uart_server)
elseif(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_UART_CLIENT_1_VS_8)
set(SOURCES_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}/sle_uart_client/sle_uart_client.c
)
set(HEADER_LIST ${CMAKE_CURRENT_SOURCE_DIR}/sle_uart_client)
endif()

set(SOURCES "${SOURCES}" ${SOURCES_LIST} PARENT_SCOPE)
set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)