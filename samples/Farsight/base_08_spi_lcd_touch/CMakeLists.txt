set(SOURCES_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}/hal_bsp_lcd/bsp_ili9341_4line.c
    ${CMAKE_CURRENT_SOURCE_DIR}/hal_bsp_lcd/font.c
    ${CMAKE_CURRENT_SOURCE_DIR}/hal_bsp_lcd/bsp_ft6336.c
    ${CMAKE_CURRENT_SOURCE_DIR}/base_lcd_touch_demo.c
)
set(HEADER_LIST 
    ${CMAKE_CURRENT_SOURCE_DIR}/hal_bsp_lcd
)

set(SOURCES "${SOURCES}" ${SOURCES_LIST} PARENT_SCOPE)
set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)
