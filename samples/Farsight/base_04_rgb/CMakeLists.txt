set(SOURCES_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}/hal_bsp_rgb/hal_bsp_aw2013.c
    ${CMAKE_CURRENT_SOURCE_DIR}/base_rgb_demo.c
)
set(HEADER_LIST ${CMAKE_CURRENT_SOURCE_DIR}/hal_bsp_rgb)

set(SOURCES "${SOURCES}" ${SOURCES_LIST} PARENT_SCOPE)
set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)
