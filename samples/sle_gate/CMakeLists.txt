if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_SERVER_ADC)
    add_subdirectory_if_exist(server_ADC)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_CLIENT)
    add_subdirectory_if_exist(sle_client)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_SERVER_SERIAL)
    add_subdirectory_if_exist(server_Serial)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_SERVER_LED)
    add_subdirectory_if_exist(server_LED)
endif()

set(SOURCES "${SOURCES}" PARENT_SCOPE)
set(PUBLIC_HEADER "${PUBLIC_HEADER}" PARENT_SCOPE)