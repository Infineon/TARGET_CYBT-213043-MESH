/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
*
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
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
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "wiced_platform.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_BT_ENABLED 1U
#define CYBSP_I2C_LIGHT_ENABLED 1U
#define ioss_0_ENABLED 1U
#define WICED_GET_PIN_FOR_LED(idx) (*(platform_led[(idx)].gpio))
#define WICED_GET_PIN_FOR_BUTTON(idx) (*(platform_button[(idx)].gpio))
#define WICED_GET_PIN_FOR_IO(idx) (*(platform_gpio[(idx)].gpio))
#define CYBSP_PUART_TX_ENABLED 1U
#define CYBSP_PUART_TX WICED_P00
#define CYBSP_SPI_MOSI_ENABLED 1U
#define CYBSP_SPI_MOSI WICED_P10
#define CYBSP_THERM_TEMP_SENSE_ENABLED 1U
#define CYBSP_THERM_TEMP_SENSE WICED_P11
#define ioss_0_pin_12_ENABLED 1U
#define ioss_0_pin_12 WICED_P12
#define ioss_0_pin_13_ENABLED 1U
#define ioss_0_pin_13 WICED_P13
#define CYBSP_THERM_REF_SENSE_ENABLED 1U
#define CYBSP_THERM_REF_SENSE WICED_P14
#define CYBSP_SPI_CS_ENABLED 1U
#define CYBSP_SPI_CS WICED_P15
#define CYBSP_SERIN_ENABLED 1U
#define CYBSP_SERIN WICED_P17
#define CYBSP_PUART_RTS_ENABLED 1U
#define CYBSP_PUART_RTS WICED_P01
#define CYBSP_USER_BTN_ENABLED 1U
#define CYBSP_USER_BTN WICED_P26
#define CYBSP_I2C_SCL_ENABLED 1U
#define CYBSP_I2C_SCL WICED_P27
#define CYBSP_PUART_RX_ENABLED 1U
#define CYBSP_PUART_RX WICED_P28
#define CYBSP_INT_ENABLED 1U
#define CYBSP_INT WICED_P29
#define CYBSP_SPI_CLK_ENABLED 1U
#define CYBSP_SPI_CLK WICED_P02
#define CYBSP_I2C_SDA_ENABLED 1U
#define CYBSP_I2C_SDA WICED_P32
#define CYBSP_PUART_CTS_ENABLED 1U
#define CYBSP_PUART_CTS WICED_P37
#define CYBSP_LED_G_ENABLED 1U
#define CYBSP_LED_G WICED_P03
#define CYBSP_LED_B_ENABLED 1U
#define CYBSP_LED_B WICED_P04
#define CYBSP_INT_DOCI_ENABLED 1U
#define CYBSP_INT_DOCI WICED_P05
#define CYBSP_LED_R_ENABLED 1U
#define CYBSP_LED_R WICED_P06
#define CYBSP_SPI_MISO_ENABLED 1U
#define CYBSP_SPI_MISO WICED_P08
#define CYBSP_THERM_REF_INPUT_ENABLED 1U
#define CYBSP_THERM_REF_INPUT WICED_P09
#define CYBSP_SPI_FLASH_ENABLED 1U
#define CYBSP_UART_ENABLED 1U
#define CYBSP_PUART_ENABLED 1U

extern const wiced_platform_gpio_t platform_gpio_pins[];
extern const size_t platform_gpio_pin_count;
extern const wiced_platform_led_config_t platform_led[];
extern const size_t led_count;
extern const wiced_platform_button_config_t platform_button[];
extern const size_t button_count;
extern const wiced_platform_gpio_config_t platform_gpio[];
extern const size_t gpio_count;


#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
