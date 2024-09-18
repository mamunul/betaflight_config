/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F411

#define BOARD_NAME        XETOZ_F411D1
#define MANUFACTURER_ID   XETOZ

#define USE_GYRO
#define USE_GYRO_SPI_MPU9250
#define USE_ACC
#define USE_ACC_SPI_MPU9250
#define USE_ACC_MPU9250
#define USE_GYRO_MPU9250
#define USE_ACC_MPU6500
#define USE_GYRO_MPU6500
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU6500

#define USE_BARO
#define USE_BARO_BMP085
#define USE_BARO_MS5611
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_MAG
#define USE_MAG_HMC5883

// #define USE_FLASH
// #define USE_FLASH_W25M512
// #define USE_FLASH_W25Q128FV
#define USE_FLASH_W25Q64

#define BEEPER_PIN           PB2
#define LED0_PIN             PC11
#define LED1_PIN             PC12

#define MOTOR1_PIN           PB4
#define MOTOR2_PIN           PB5
#define MOTOR3_PIN           PB6
#define MOTOR4_PIN           PB7

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10

#define UART2_TX_PIN         PA2
#define UART2_RX_PIN         PA3

#define I2C1_SCL_PIN         PB8
#define I2C1_SDA_PIN         PB9

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15

#define ADC_VBAT_PIN         PB0
#define ADC_RSSI_PIN         PB3
#define ADC_CURR_PIN         PB1

#define GYRO_1_EXTI_PIN      PB10
#define GYRO_1_CS_PIN        PB11

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB4 , 1,  0) \
    TIMER_PIN_MAP( 1, PB5 , 1,  0) \
    TIMER_PIN_MAP( 2, PB6 , 1,  0) \
    TIMER_PIN_MAP( 3, PB7 , 1,  0) 



#define ADC1_DMA_OPT        1


#define DEFAULT_BLACKBOX_DEVICE BLACKBOX_DEVICE_FLASH
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
// #define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
// #define BEEPER_INVERTED
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define SYSTEM_HSE_MHZ 25
#define GYRO_1_SPI_INSTANCE SPI2
#define GYRO_1_ALIGN CW180_DEG

/*
512 KB Flash
128 KB SRAM
8MB extra flash
25MHz Crystal
SPI1 CS/SCK/MISO/MOSI : PA4/PA5/PA6/PA7 (Routed to footprint for external flash)
USER_PB : PA0
USER_LED : PC13
USB: PA11/PA12
32KHz: PC14/PC15
*/