set(SOURCES_LIST
    ${CMAKE_CURRENT_SOURCE_DIR}/sht20/hal_bsp_sht20.c
    ${CMAKE_CURRENT_SOURCE_DIR}/base_sht20_demo.c
)
set(HEADER_LIST ${CMAKE_CURRENT_SOURCE_DIR}/sht20)

set(SOURCES "${SOURCES}" ${SOURCES_LIST} PARENT_SCOPE)
set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)
