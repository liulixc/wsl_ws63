set(SOURCES_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/hal_bsp_nfc_to_wifi.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/bsp_ili9341_4line.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/bsp_ft6336.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/font.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/wifi_connect.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/hal_bsp_ap3216.c 
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/hal_bsp_bmps.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/hal_bsp_nfc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/hal_bsp_sht20.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/bsp_init.c
    ${CMAKE_CURRENT_SOURCE_DIR}/smart_home.c
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp/mqtt.c


)
set(HEADER_LIST 
    ${CMAKE_CURRENT_SOURCE_DIR}/bsp
)

set(SOURCES "${SOURCES}" ${SOURCES_LIST} PARENT_SCOPE)
set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)
