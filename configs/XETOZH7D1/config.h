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

#define FC_TARGET_MCU     STM32H743

#define BOARD_NAME        XETOZ_H7D1
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

#define BEEPER_PIN PE4
#define LED1_PIN PE0
#define LED2_PIN PE1

#define MOTOR1_PIN PB0
#define MOTOR2_PIN PB1
#define MOTOR3_PIN PA0
#define MOTOR4_PIN PA1

#define UART1_TX_PIN PA9
#define UART1_RX_PIN PA10

#define UART3_TX_PIN PD8
#define UART3_RX_PIN PD9

#define UART6_TX_PIN PC6
#define UART6_RX_PIN PC7

#define UART7_TX_PIN PE8
#define UART7_RX_PIN PE7

#define I2C1_SCL_PIN PB8
#define I2C1_SDA_PIN PB9

#define I2C2_SCL_PIN PB10
#define I2C2_SDA_PIN PB11

#define SPI1_SCK_PIN PA5
#define SPI1_SDI_PIN PA6
#define SPI1_SDO_PIN PA7

#define SPI2_SCK_PIN PB13
#define SPI2_SDI_PIN PB14
#define SPI2_SDO_PIN PB15

#define ADC_VBAT_PIN PC3
#define ADC_RSSI_PIN PC5
#define ADC_CURR_PIN PC2

#define GYRO_1_EXTI_PIN PC4
#define GYRO_1_CS_PIN PC0

#define USE_GPS

// #define USB_DETECT_PIN PC5
// #define SDCARD_DETECT_PIN PD4
#define SDIO_DEVICE SDIODEV_1
#define SDIO_USE_4BIT 1
#define SDIO_CK_PIN PC12
#define SDIO_CMD_PIN PD2
#define SDIO_D0_PIN PC8
#define SDIO_D1_PIN PC9
#define SDIO_D2_PIN PC10
#define SDIO_D3_PIN PC11

#define TIMER_PIN_MAPPING         \
    TIMER_PIN_MAP(0, PB0, 2, 0)   \
    TIMER_PIN_MAP(1, PB1, 2, 1)   \
    TIMER_PIN_MAP(2, PA0, 2, 2)   \
    TIMER_PIN_MAP(3, PA1, 2, 3)   \
    TIMER_PIN_MAP(4, PA2, 2, 4)   \
    TIMER_PIN_MAP(5, PA3, 2, 5)   \
    TIMER_PIN_MAP(6, PD12, 1, 6)  \
    TIMER_PIN_MAP(7, PD13, 1, 7)  \
    TIMER_PIN_MAP(8, PD14, 1, 12) \
    TIMER_PIN_MAP(9, PD15, 1, -1) \
    TIMER_PIN_MAP(10, PE5, 1, 0)  \
    TIMER_PIN_MAP(11, PE6, 1, -1) \
    TIMER_PIN_MAP(12, PA8, 1, 14) \
    TIMER_PIN_MAP(13, PA15, 1, 0) \
    TIMER_PIN_MAP(14, PC7, 2, 0)  \
    TIMER_PIN_MAP(15, PC6, 2, 0)  \
    TIMER_PIN_MAP(16, PB8, 1, 0)  \
    TIMER_PIN_MAP(17, PB9, 1, 0)

#define ADC1_DMA_OPT 8
#define ADC3_DMA_OPT 9
#define TIMUP1_DMA_OPT 0
#define TIMUP2_DMA_OPT 0
#define TIMUP3_DMA_OPT 2
#define TIMUP4_DMA_OPT 1
#define TIMUP5_DMA_OPT 0
#define TIMUP8_DMA_OPT 0

// #define DEFAULT_GYRO_TO_USE GYRO_CONFIG_USE_GYRO_BOTH
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
// #define DEFAULT_CURRENT_METER_SCALE 500
#define SYSTEM_HSE_MHZ 25
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG

/*
Camera (8 bit) connector
ST7735 TFT-LCD 160 x 80 pixels (RGB565 3-SPI)
2 MB Flash
~1 MB SRAM
25MHz HSE
64-Mbit Quad-SPI
64-Mbit SPI
USER_LED : PE3
USER_PB : PC13
SPI1 SCK/MISO/MOSI/NSS : PB3/PB4/PD7/PD6 (NOR Flash memory)
SPI4 SCK/MOSI/NSS : PE10/PE13/PE12/PE14/PE11 (LCD)
QuadSPI CLK/NCS/IO0/IO1/IO2/IO3 : PB2/PB6/PD11/PD12/PE2/PD13 (NOR Flash memory)
SDMMC1 CLK/DCMD/CD/D0/D1/D2/D3 : PC12/PD2/PD4/PC8/PC9/PC10/PC11 (microSD card)
USB DM/DP : PA11/PA12 (USB CDC ACM)
SWD : PA13/PA14
32KHz : PC14/PC15

*/