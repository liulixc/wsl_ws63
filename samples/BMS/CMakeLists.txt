if(DEFINED CONFIG_SAMPLE_SUPPORT_BMS_GATEWAY)
    add_subdirectory_if_exist(bms_gateway)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_BMS_SLAVE)
    add_subdirectory_if_exist(bms_slave)
endif()

set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)
set(SOURCES "${SOURCES}" PARENT_SCOPE)