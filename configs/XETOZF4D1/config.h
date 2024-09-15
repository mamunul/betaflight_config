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

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        XETOZ_F4D1
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
#define USE_SDCARD
#define USE_SDCARD_SDIO

#define BEEPER_PIN PC0
#define LED0_PIN PB5
#define LED1_PIN PB4

#define MOTOR1_PIN PA3
#define MOTOR2_PIN PB0
#define MOTOR3_PIN PB1
#define MOTOR4_PIN PA2

#define UART1_TX_PIN PA9
#define UART1_RX_PIN PA10

// any UART disables dfu mode, so to activate dfu mode first disable 
//all UART from ports config of betaflight configurator
#define UART3_RX_PIN PB11
#define UART3_TX_PIN PB10

#define UART6_TX_PIN PC6
#define UART6_RX_PIN PC7

#define I2C1_SCL_PIN PB6
#define I2C1_SDA_PIN PB7

#define SPI1_SCK_PIN PA5
#define SPI1_SDI_PIN PA6
#define SPI1_SDO_PIN PA7

#define SPI2_SCK_PIN PB13
#define SPI2_SDI_PIN PB14
#define SPI2_SDO_PIN PB15

#define ADC_VBAT_PIN PC1
// #define ADC_RSSI_PIN PC2
// #define ADC_CURR_PIN PC3
// #define FLASH_CS_PIN PB3

#define GYRO_1_EXTI_PIN PC4
#define GYRO_1_CS_PIN PA4

#define USE_GPS

// #define USB_DETECT_PIN PC5
// #define SDCARD_DETECT_PIN       PA8

// #define SDCARD_DETECT_INVERTED
#define SDIO_DEVICE             SDIODEV_1
#define SDIO_USE_4BIT           1
#define SDIO_CK_PIN             PC12
#define SDIO_CMD_PIN            PD2
#define SDIO_D0_PIN             PC8
#define SDIO_D1_PIN             PC9
#define SDIO_D2_PIN             PC10
#define SDIO_D3_PIN             PC11

#define TIMER_PIN_MAPPING       \
    TIMER_PIN_MAP(0, PC9, 2, 0) \
    TIMER_PIN_MAP(1, PA3, 1, 1) \
    TIMER_PIN_MAP(2, PB0, 2, 0) \
    TIMER_PIN_MAP(3, PB1, 2, 0) \
    TIMER_PIN_MAP(4, PA2, 1, 0) \
    TIMER_PIN_MAP(5, PA0, 2, 0) \
    TIMER_PIN_MAP(6, PB9, 2, -1)

#define ADC1_DMA_OPT 1

#define DEFAULT_BLACKBOX_DEVICE BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
// #define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_INVERTED
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define SYSTEM_HSE_MHZ 8
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG