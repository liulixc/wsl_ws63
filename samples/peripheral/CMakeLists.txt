#===============================================================================
# @brief    cmake file
# Copyright (c) HiSilicon (Shanghai) Technologies Co., Ltd. 2023-2023. All rights reserved.
#===============================================================================
if(DEFINED CONFIG_SAMPLE_SUPPORT_AMIC)
    add_subdirectory_if_exist(amic)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_BLINKY)
    add_subdirectory_if_exist(blinky)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_BUTTON)
    add_subdirectory_if_exist(button)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_TASKS)
    add_subdirectory_if_exist(tasks)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_TCXO)
    add_subdirectory_if_exist(tcxo)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_DMA)
    add_subdirectory_if_exist(dma)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_I2C)
    add_subdirectory_if_exist(i2c)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_I2S)
    add_subdirectory_if_exist(i2s)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_KEYSCAN)
    add_subdirectory_if_exist(keyscan)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_PDM)
    add_subdirectory_if_exist(pdm)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_PDM_AMIC)
    add_subdirectory_if_exist(pdm_amic)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_PINCTRL)
    add_subdirectory_if_exist(pinctrl)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_QDEC)
    add_subdirectory_if_exist(qdec)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SFC)
    add_subdirectory_if_exist(sfc)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SPI)
    add_subdirectory_if_exist(spi)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SYSTICK)
    add_subdirectory_if_exist(systick)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_WDT)
    add_subdirectory_if_exist(watchdog)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_PWM)
    add_subdirectory_if_exist(pwm)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_UART)
    add_subdirectory_if_exist(uart)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_ADC)
    add_subdirectory_if_exist(adc)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_RTC)
    add_subdirectory_if_exist(rtc)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_TIMER)
    add_subdirectory_if_exist(timer)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_EFLASH)
    add_subdirectory_if_exist(eflash)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_CALENDAR)
    add_subdirectory_if_exist(calendar)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_I2S_DMA)
    add_subdirectory_if_exist(i2s_dma)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_I2S_DMA_LLI)
    add_subdirectory_if_exist(i2s_dma_lli)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_CAN)
    add_subdirectory_if_exist(can)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_CLOCKS)
    add_subdirectory_if_exist(clocks)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_MQTT)
    add_subdirectory_if_exist(mqtt)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_OLED)
    add_subdirectory_if_exist(oled)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_DISTRIBUTE_NETWORK)
    add_subdirectory_if_exist(sle_distribute_network)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_THROUGHPUT)
    add_subdirectory_if_exist(sle_throughput)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_UARTDEMO)
    add_subdirectory_if_exist(uart_demo)
endif()
    
if(DEFINED CONFIG_SAMPLE_SUPPORT_GYRO)
    add_subdirectory_if_exist(gyro)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_UART)
    add_subdirectory_if_exist(sle_uart)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_UART_1_VS_8)
    add_subdirectory_if_exist(sle_uart_1_vs_8)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_BLE_UART)
    add_subdirectory_if_exist(ble_uart)
endif()

if(DEFINED CONFIG_SAMPLE_SUPPORT_SLE_GETAWAY)
    add_subdirectory_if_exist(sle_gateway)
endif()

set(PUBLIC_HEADER "${PUBLIC_HEADER}" ${HEADER_LIST} PARENT_SCOPE)
set(SOURCES "${SOURCES}" PARENT_SCOPE)