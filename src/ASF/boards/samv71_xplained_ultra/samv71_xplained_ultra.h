/**
 * \file
 *
 * \brief SAMV71-XLTRA Board Definition.
 *
 * Copyright (c) 2015-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef _SAMV71_XLTRA_H_
#define _SAMV71_XLTRA_H_

#include "compiler.h"
#include "system_samv71.h"

/*----------------------------------------------------------------------------*/
/**
 *  \page samv71_xplained_ultra_opfreq "SAMV71-XLTRA - Operating frequencies"
 *  This page lists several definition related to the board operating frequency
 *
 *  \section Definitions
 *  - \ref BOARD_FREQ_*
 *  - \ref BOARD_MCK
 */

/** Board oscillator settings */
#define BOARD_FREQ_SLCK_XTAL            (32768U)
#define BOARD_FREQ_SLCK_BYPASS          (32768U)
#define BOARD_FREQ_MAINCK_XTAL          (12000000U)
#define BOARD_FREQ_MAINCK_BYPASS        (12000000U)

/** Master clock frequency */
#define BOARD_MCK                       CHIP_FREQ_CPU_MAX

/** board main clock xtal statup time */
#define BOARD_OSC_STARTUP_US            15625

/*----------------------------------------------------------------------------*/
/**
 * \page samv71_xplained_ultra_info "SAMV71-XLTRA - Board informations"
 * This page lists several definition related to the board description.
 *
 * \section Definitions
 * - \ref BOARD_NAME
 */

/** Name of the board */
#define BOARD_NAME "SAMV71-XLTRA"
/** Board definition */
#define samv71xultra
/** Family definition (already defined) */
#define samv71
/** Core definition */
#define cortexm7

/*----------------------------------------------------------------------------*/

#define CONSOLE_UART               USART1
#define CONSOLE_UART_ID            ID_USART1
/** USART1 pins definitions, PA21,PB4. */
#define USART1_RXD_GPIO   PIO_PA21_IDX
#define USART1_RXD_FLAGS  IOPORT_MODE_MUX_A
#define USART1_TXD_GPIO   PIO_PB4_IDX
#define USART1_TXD_FLAGS  IOPORT_MODE_MUX_D

/** USART0 pins definitions, PB0,PB1. */
#define USART0_RXD_GPIO   PIO_PB0_IDX
#define USART0_RXD_FLAGS  IOPORT_MODE_MUX_C
#define USART0_TXD_GPIO   PIO_PB1_IDX
#define USART0_TXD_FLAGS  IOPORT_MODE_MUX_C

#define PIN_USART0_SCK_IDX    (PIO_PB13_IDX)
#define PIN_USART0_SCK_FLAGS  (IOPORT_MODE_MUX_C)

/** USART0 pin CTS */
#define PIN_USART0_CTS_IDX    (PIO_PB2_IDX)
#define PIN_USART0_CTS_FLAGS  (IOPORT_MODE_MUX_C)

/** USART0 pin RTS */
#define PIN_USART0_RTS_IDX    (PIO_PB3_IDX)
#define PIN_USART0_RTS_FLAGS  (IOPORT_MODE_MUX_C)


//! \name LED definitions
//@{
#define LED0_GPIO            (PIO_PA23_IDX)
#define LED0_FLAGS           (0)
#define LED0_ACTIVE_LEVEL    (IOPORT_PIN_LEVEL_LOW)
#define LED0_INACTIVE_LEVEL  (IOPORT_PIN_LEVEL_HIGH)

#define LED1_GPIO            (PIO_PC9_IDX)
#define LED1_FLAGS           (0)
#define LED1_ACTIVE_LEVEL    (IOPORT_PIN_LEVEL_LOW)
#define LED1_INACTIVE_LEVEL  (IOPORT_PIN_LEVEL_HIGH)

#define	LED_COUNT			 (2)
//@}

//! \name SW0 definitions
//@{
#define SW0_PIN                   (PIO_PA9_IDX)
#define SW0_ACTIVE                (IOPORT_PIN_LEVEL_LOW)
#define SW0_INACTIVE              (!SW0_ACTIVE)
#define SW0_SUPC_INPUT            2

/**
 * Wrapper macros for SW0, to ensure common naming across all Xplained Ultra
 * boards.
 */
#define PIN_SW0      {PIO_PA9, PIOA, ID_PIOA, PIO_INPUT, PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE}
#define PIN_SW0_MASK PIO_PA9
#define PIN_SW0_PIO  PIOA
#define PIN_SW0_ID   ID_PIOA
#define PIN_SW0_TYPE PIO_INPUT
#define PIN_SW0_ATTR (PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE)
//@}

//! \name SW1 definitions
//@{
#define SW1_PIN                   (PIO_PB12_IDX)
#define SW1_ACTIVE                (IOPORT_PIN_LEVEL_LOW)
#define SW1_INACTIVE              (!SW1_ACTIVE)
#define SW1_SUPC_INPUT            2

/**
 * Wrapper macros for SW1, to ensure common naming across all Xplained Ultra
 * boards.
 */
#define PIN_SW1      {PIO_PB12, PIOB, ID_PIOB, PIO_INPUT, PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE}
#define PIN_SW1_MASK PIO_PB12
#define PIN_SW1_PIO  PIOB
#define PIN_SW1_ID   ID_PIOB
#define PIN_SW1_TYPE PIO_INPUT
#define PIN_SW1_ATTR (PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE)
//@}

/**
 * \name LED #0 definitions
 *
 * Wrapper macros for LED0, to ensure common naming across all Xplained Ultra
 * boards.
 */
//@{
#define LED_0_NAME                "LED0 (yellow)"
#define LED_0_PIN                 LED0_GPIO
#define LED_0_ACTIVE              LED0_ACTIVE_LEVEL
#define LED_0_INACTIVE            LED0_INACTIVE_LEVEL

#define PIN_LED_0       {PIO_PA23, PIOA, ID_PIOA, PIO_OUTPUT_1, PIO_DEFAULT}
#define PIN_LED_0_MASK  PIO_PA23
#define PIN_LED_0_PIO   PIOA
#define PIN_LED_0_ID    ID_PIOA
#define PIN_LED_0_TYPE  PIO_OUTPUT_1
#define PIN_LED_0_ATTR  PIO_DEFAULT
//@}

/* TC-- Timer Count */
#define PIN_TC0_TIOA0        (PIO_PA0_IDX)
#define PIN_TC0_TIOA0_MUX    (IOPORT_MODE_MUX_B)
#define PIN_TC0_TIOA0_FLAGS  (IOPORT_MODE_MUX_B)

#define PIN_TC0_TIOA0_PIO    PIOA
#define PIN_TC0_TIOA0_MASK   PIO_PA0
#define PIN_TC0_TIOA0_ID     ID_PIOA
#define PIN_TC0_TIOA0_TYPE   PIO_PERIPH_B
#define PIN_TC0_TIOA0_ATTR   PIO_DEFAULT

#define PIN_TC3_TIOA11	(PIO_PD21_IDX)
#define PIN_TC3_TIOA11_MUX	(IOPORT_MODE_MUX_C)
#define PIN_TC3_TIOA11_FLAGS	(IOPORT_MODE_MUX_C)

#define PIN_TC3_TIOA11_PIO	PIOD
#define PIN_TC3_TIOA11_MASK	PIO_PD21
#define PIN_TC3_TIOA11_ID	ID_PIOD
#define PIN_TC3_TIOA11_TYPE	PIO_PERIPH_C
#define PIN_TC3_TIOA11_ATTR	PIO_DEFAULT
/**
 * \name LED #1 definitions
 *
 * Wrapper macros for LED1, to ensure common naming across all Xplained Ultra
 * boards.
 */
//@{
#define LED_1_NAME                "LED1 (yellow)"
#define LED_1_PIN                 LED1_GPIO
#define LED_1_ACTIVE              LED1_ACTIVE_LEVEL
#define LED_1_INACTIVE            LED1_INACTIVE_LEVEL

#define PIN_LED_1       {PIO_PC9, PIOC, ID_PIOC, PIO_OUTPUT_1, PIO_DEFAULT}
#define PIN_LED_1_MASK  PIO_PC9
#define PIN_LED_1_PIO   PIOC
#define PIN_LED_1_ID    ID_PIOC
#define PIN_LED_1_TYPE  PIO_OUTPUT_1
#define PIN_LED_1_ATTR  PIO_DEFAULT
//@}

//! Number of on-board LEDs
#define BOARD_NUM_OF_LED 2

/**
 * Push button #0 definition. Attributes = pull-up + debounce + interrupt on
 * rising edge.
 */
#define BUTTON_0_NAME             "SW0"
#define BUTTON_0_PIN              SW0_PIN
#define BUTTON_0_ACTIVE           SW0_ACTIVE
#define BUTTON_0_INACTIVE         SW0_INACTIVE
#define BUTTON_0_SUPC_INPUT       SW0_SUPC_INPUT
#define GPIO_PUSH_BUTTON_0        BUTTON_0_PIN

#define PUSHBUTTON_1_NAME        "SW0"
#define PUSHBUTTON_1_WKUP_LINE   (2)
#define PUSHBUTTON_1_WKUP_FSTT   (PMC_FSMR_FSTT2)
#define GPIO_PUSH_BUTTON_1       (PIO_PA9_IDX)
#define GPIO_PUSH_BUTTON_1_FLAGS (IOPORT_MODE_PULLUP | IOPORT_MODE_DEBOUNCE)
#define GPIO_PUSH_BUTTON_1_SENSE (IOPORT_SENSE_RISING)

#define PIN_PUSHBUTTON_1       {PIO_PA9, PIOA, ID_PIOA, PIO_INPUT, \
		PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE}
#define PIN_PUSHBUTTON_1_MASK  PIO_PA9
#define PIN_PUSHBUTTON_1_PIO   PIOA
#define PIN_PUSHBUTTON_1_ID    ID_PIOA
#define PIN_PUSHBUTTON_1_TYPE  PIO_INPUT
#define PIN_PUSHBUTTON_1_ATTR  (PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE)
#define PIN_PUSHBUTTON_1_IRQn  PIOA_IRQn

/**
 * Push button #1 definition. Attributes = pull-up + debounce + interrupt on
 * rising edge.
 */
#define BUTTON_1_NAME             "SW1"
#define BUTTON_1_PIN              SW1_PIN
#define BUTTON_1_ACTIVE           SW1_ACTIVE
#define BUTTON_1_INACTIVE         SW1_INACTIVE
#define BUTTON_1_SUPC_INPUT       SW1_SUPC_INPUT

#define PUSHBUTTON_2_NAME        "SW1"
#define PUSHBUTTON_2_WKUP_LINE   (2)
#define PUSHBUTTON_2_WKUP_FSTT   (PMC_FSMR_FSTT2)
#define GPIO_PUSH_BUTTON_2       (PIO_PB12_IDX)
#define GPIO_PUSH_BUTTON_2_FLAGS (IOPORT_MODE_PULLUP | IOPORT_MODE_DEBOUNCE)
#define GPIO_PUSH_BUTTON_2_SENSE (IOPORT_SENSE_RISING)

#define PIN_PUSHBUTTON_2       {PIO_PB12, PIOB, ID_PIOB, PIO_INPUT, \
		PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE}
#define PIN_PUSHBUTTON_2_MASK  PIO_PB12
#define PIN_PUSHBUTTON_2_PIO   PIOB
#define PIN_PUSHBUTTON_2_ID    ID_PIOB
#define PIN_PUSHBUTTON_2_TYPE  PIO_INPUT
#define PIN_PUSHBUTTON_2_ATTR  (PIO_PULLUP | PIO_DEBOUNCE | PIO_IT_RISE_EDGE)
#define PIN_PUSHBUTTON_2_IRQn  PIOB_IRQn

/** List of all push button definitions. */
#define PINS_PUSHBUTTONS    {PIN_PUSHBUTTON_1,PIN_PUSHBUTTON_2}

//! \name Extension header #1 pin definitions
//@{
#define EXT1_PIN_3                PIO_PC31_IDX
#define EXT1_PIN_4                PIO_PA19_IDX
#define EXT1_PIN_5                PIO_PB3_IDX
#define EXT1_PIN_6                PIO_PB2_IDX
#define EXT1_PIN_7                PIO_PA0_IDX
#define EXT1_PIN_8                PIO_PC30_IDX
#define EXT1_PIN_9                PIO_PD28_IDX
#define EXT1_PIN_10               PIO_PA5_IDX
#define EXT1_PIN_11               PIO_PA3_IDX
#define EXT1_PIN_12               PIO_PA4_IDX
#define EXT1_PIN_13               PIO_PB0_IDX
#define EXT1_PIN_14               PIO_PB1_IDX
#define EXT1_PIN_15               PIO_PD25_IDX
#define EXT1_PIN_16               PIO_PD21_IDX
#define EXT1_PIN_17               PIO_PD20_IDX
#define EXT1_PIN_18               PIO_PD22_IDX
//@}

//! \name Extension header #1 pin definitions by function
//@{
#define EXT1_PIN_ADC_0            EXT1_PIN_3
#define EXT1_PIN_ADC_1            EXT1_PIN_4
#define EXT1_PIN_GPIO_0           EXT1_PIN_5
#define EXT1_PIN_GPIO_1           EXT1_PIN_6
#define EXT1_PIN_PWM_0            EXT1_PIN_7
#define EXT1_PIN_PWM_1            EXT1_PIN_8
#define EXT1_PIN_IRQ              EXT1_PIN_9
#define EXT1_PIN_TWI_SDA          EXT1_PIN_11
#define EXT1_PIN_TWI_SCL          EXT1_PIN_12
#define EXT1_PIN_UART_RX          EXT1_PIN_13
#define EXT1_PIN_UART_TX          EXT1_PIN_14
#define EXT1_PIN_SPI_SS_1         EXT1_PIN_10
#define EXT1_PIN_SPI_SS_0         EXT1_PIN_15
#define EXT1_PIN_SPI_MOSI         EXT1_PIN_16
#define EXT1_PIN_SPI_MISO         EXT1_PIN_17
#define EXT1_PIN_SPI_SCK          EXT1_PIN_18
//@}

//! \name Extension header #2 pin definitions
//@{
#define EXT2_PIN_3                PIO_PD30_IDX
#define EXT2_PIN_4                PIO_PC13_IDX
#define EXT2_PIN_5                PIO_PA6_IDX
#define EXT2_PIN_6                PIO_PD11_IDX
#define EXT2_PIN_7                PIO_PC19_IDX
#define EXT2_PIN_8                PIO_PD26_IDX
#define EXT2_PIN_9                PIO_PA2_IDX
#define EXT2_PIN_10               PIO_PA24_IDX
#define EXT2_PIN_11               PIO_PA3_IDX
#define EXT2_PIN_12               PIO_PA4_IDX
#define EXT2_PIN_13               PIO_PA21_IDX
#define EXT2_PIN_14               PIO_PB4_IDX
#define EXT2_PIN_15               PIO_PD27_IDX
#define EXT2_PIN_16               PIO_PD21_IDX
#define EXT2_PIN_17               PIO_PD20_IDX
#define EXT2_PIN_18               PIO_PD22_IDX
//@}

//! \name Extension header #2 pin definitions by function
//@{
#define EXT2_PIN_ADC_0            EXT2_PIN_3
#define EXT2_PIN_ADC_1            EXT2_PIN_4
#define EXT2_PIN_GPIO_0           EXT2_PIN_5
#define EXT2_PIN_GPIO_1           EXT2_PIN_6
#define EXT2_PIN_PWM_0            EXT2_PIN_7
#define EXT2_PIN_PWM_1            EXT2_PIN_8
#define EXT2_PIN_IRQ              EXT2_PIN_9
#define EXT2_PIN_TWI_SDA          EXT2_PIN_11
#define EXT2_PIN_TWI_SCL          EXT2_PIN_12
#define EXT2_PIN_UART_RX          EXT2_PIN_13
#define EXT2_PIN_UART_TX          EXT2_PIN_14
#define EXT2_PIN_SPI_SS_1         EXT2_PIN_10
#define EXT2_PIN_SPI_SS_0         EXT2_PIN_15
#define EXT2_PIN_SPI_MOSI         EXT2_PIN_16
#define EXT2_PIN_SPI_MISO         EXT2_PIN_17
#define EXT2_PIN_SPI_SCK          EXT2_PIN_18
//@}

/** PCK0 pin definition (PA6) */
#define PIN_PCK0         (PIO_PA6_IDX)
#define PIN_PCK0_MUX     (IOPORT_MODE_MUX_B)
#define PIN_PCK0_FLAGS   (IOPORT_MODE_MUX_B)
#define PIN_PCK0_PORT    IOPORT_PIOA
#define PIN_PCK0_MASK    PIO_PA6B_PCK0
#define PIN_PCK0_PIO     PIOA
#define PIN_PCK0_ID      ID_PIOA
#define PIN_PCK0_TYPE    PIO_PERIPH_B
#define PIN_PCK0_ATTR    PIO_DEFAULT


/** TWI0 pins definition */
#define TWIHS0_DATA_GPIO   PIO_PA3_IDX
#define TWIHS0_DATA_FLAGS  (IOPORT_MODE_MUX_A)
#define TWIHS0_CLK_GPIO    PIO_PA4_IDX
#define TWIHS0_CLK_FLAGS   (IOPORT_MODE_MUX_A)

/** SPI0 pins definition */
#define SPI0_MISO_GPIO    PIO_PD20_IDX
#define SPI0_MISO_FLAGS  (IOPORT_MODE_MUX_B)
#define SPI0_MOSI_GPIO    PIO_PD21_IDX
#define SPI0_MOSI_FLAGS  (IOPORT_MODE_MUX_B)
#define SPI0_NPCS0_GPIO   PIO_PB2_IDX
#define SPI0_NPCS0_FLAGS  (IOPORT_MODE_MUX_D)
#define SPI0_NPCS1_GPIO   PIO_PD25_IDX
#define SPI0_NPCS1_FLAGS  (IOPORT_MODE_MUX_B)
#define SPI0_NPCS2_GPIO   PIO_PD12_IDX
#define SPI0_NPCS2_FLAGS  (IOPORT_MODE_MUX_C)
#define SPI0_NPCS3_GPIO   PIO_PD27_IDX
#define SPI0_NPCS3_FLAGS  (IOPORT_MODE_MUX_B)
#define SPI0_SPCK_GPIO    PIO_PD22_IDX
#define SPI0_SPCK_FLAGS  (IOPORT_MODE_MUX_B)

/** QSPI pins definition */
#define QSPI_QSCK_GPIO    PIO_PA14_IDX
#define QSPI_QSCK_FLAGS   (IOPORT_MODE_MUX_A)
#define QSPI_QCS_GPIO     PIO_PA11_IDX
#define QSPI_QCS_FLAGS    (IOPORT_MODE_MUX_A)
#define QSPI_QIO0_GPIO    PIO_PA13_IDX
#define QSPI_QIO0_FLAGS   (IOPORT_MODE_MUX_A)
#define QSPI_QIO1_GPIO    PIO_PA12_IDX
#define QSPI_QIO1_FLAGS   (IOPORT_MODE_MUX_A)
#define QSPI_QIO2_GPIO    PIO_PA17_IDX
#define QSPI_QIO2_FLAGS   (IOPORT_MODE_MUX_A)
#define QSPI_QIO3_GPIO    PIO_PD31_IDX
#define QSPI_QIO3_FLAGS   (IOPORT_MODE_MUX_A)

/** AFEC channel for potentiometer */
#define AFEC_CHANNEL_POTENTIOMETER  AFEC_CHANNEL_0

//#define MCAN_MODULE              MCAN1
/*----------------------------------------------------------------------------*/
/**
 * \page samv71_xpro_CAN "SAMV71-XPRO - CAN"
 * This page lists definitions related to CAN0 and CAN1.
 *
 * CAN
 * - \ref PIN_CAN0_TRANSCEIVER_RXEN
 * - \ref PIN_CAN0_TRANSCEIVER_RS
 * - \ref PIN_CAN0_TXD
 * - \ref PIN_CAN0_RXD
 * - \ref PINS_CAN0
 *
 * - \ref PIN_CAN1_TRANSCEIVER_RXEN
 * - \ref PIN_CAN1_TRANSCEIVER_RS
 * - \ref PIN_CAN1_TXD
 * - \ref PIN_CAN1_RXD
 * - \ref PINS_CAN1
 */
/** CAN0 transceiver PIN RS. */
#define PIN_CAN0_TR_RS_IDX        PIO_PE0_IDX
#define PIN_CAN0_TR_RS_FLAGS      IOPORT_DIR_OUTPUT

/** CAN0 transceiver PIN EN. */
#define PIN_CAN0_TR_EN_IDX        PIO_PE1_IDX
#define PIN_CAN0_TR_EN_FLAGS      IOPORT_DIR_OUTPUT

/** CAN0 PIN RX. */
#define PIN_CAN0_RX_IDX           PIO_PB3_IDX
#define PIN_CAN0_RX_FLAGS         IOPORT_MODE_MUX_A

/** CAN0 PIN TX. */
#define PIN_CAN0_TX_IDX           PIO_PB2_IDX
#define PIN_CAN0_TX_FLAGS         IOPORT_MODE_MUX_A

/** CAN1 transceiver PIN RS. */
#define PIN_CAN1_TR_RS_IDX        PIO_PE2_IDX
#define PIN_CAN1_TR_RS_FLAGS      IOPORT_DIR_OUTPUT

/** CAN1 transceiver PIN EN. */
#define PIN_CAN1_TR_EN_IDX        PIO_PE3_IDX
#define PIN_CAN1_TR_EN_FLAGS      IOPORT_DIR_OUTPUT

/** CAN1 PIN RX. */
#define PIN_CAN1_RX_IDX           PIO_PC12_IDX
#define PIN_CAN1_RX_FLAGS         IOPORT_MODE_MUX_C

/** CAN1 PIN TX. */
#define PIN_CAN1_TX_IDX           PIO_PC14_IDX
#define PIN_CAN1_TX_FLAGS         IOPORT_MODE_MUX_C

/** PWM LED0 pin definitions. */
#define PIN_PWM_LED0_GPIO    PIO_PA23_IDX
#define PIN_PWM_LED0_FLAGS   (IOPORT_MODE_MUX_B)
#define PIN_PWM_LED0_CHANNEL PWM_CHANNEL_0

/** PWM LED1 pin definitions. */
#define PIN_PWM_LED1_GPIO    PIO_PA24_IDX
#define PIN_PWM_LED1_FLAGS   (IOPORT_MODE_MUX_B)
#define PIN_PWM_LED1_CHANNEL PWM_CHANNEL_1

/*----------------------------------------------------------------------------*/
/** GMAC HW configurations */
#define BOARD_GMAC_PHY_ADDR 1

#define PIN_GMAC_RESET_MASK   PIO_PC10
#define PIN_GMAC_RESET_PIO    PIOC
#define PIN_GMAC_INT_MASK     PIO_PA19
#define PIN_GMAC_INT_PIO      PIOA
#define PIN_GMAC_SIGDET_MASK  PIO_PA29
#define PIN_GMAC_SIGDET_PIO   PIOA
#define PIN_GMAC_PERIPH  PIO_PERIPH_A
#define PIN_GMAC_PIO     PIOD
#define PIN_GMAC_MASK   (PIO_PD0A_GTXCK | PIO_PD1A_GTXEN | PIO_PD2A_GTX0 | \
						 PIO_PD3A_GTX1 | PIO_PD4A_GRXDV | PIO_PD5A_GRX0 |  \
						 PIO_PD6A_GRX1 | PIO_PD7A_GRXER | PIO_PD8A_GMDC | \
						 PIO_PD9A_GMDIO)

/** Board configuration of the AT24MAC EEPROM */
#define BOARD_AT24MAC_TWIHS               TWIHS0
//#define BOARD_AT24MAC_ADDRESS             (0xBE >> 1)
#define BOARD_AT24MAC_TWIHS_CLK           (400000UL)
#define BOARD_AT24MAC_PAGE_SIZE           16
#define BOARD_AT24MAC_TWIHS_INSTANCE      TWIHS0
#define BOARD_AT24MAC_ADDRESS             (0xAE >> 1)
#define BOARD_CLK_TWIHS_EEPROM            PIO_PA4

/** HSMCI pins definition. */
/*! Number of slot connected on HSMCI interface */
#define SD_MMC_HSMCI_MEM_CNT            1
#define SD_MMC_HSMCI_SLOT_0_SIZE        4
/** HSMCI MCCDA pin definition. */
#define PIN_HSMCI_MCCDA_GPIO            (PIO_PA28_IDX)
#define PIN_HSMCI_MCCDA_FLAGS           (IOPORT_MODE_MUX_C)
/** HSMCI MCCK pin definition. */
#define PIN_HSMCI_MCCK_GPIO             (PIO_PA25_IDX)
#define PIN_HSMCI_MCCK_FLAGS            (IOPORT_MODE_MUX_D)
/** HSMCI MCDA0 pin definition. */
#define PIN_HSMCI_MCDA0_GPIO            (PIO_PA30_IDX)
#define PIN_HSMCI_MCDA0_FLAGS           (IOPORT_MODE_MUX_C)
/** HSMCI MCDA1 pin definition. */
#define PIN_HSMCI_MCDA1_GPIO            (PIO_PA31_IDX)
#define PIN_HSMCI_MCDA1_FLAGS           (IOPORT_MODE_MUX_C)
/** HSMCI MCDA2 pin definition. */
#define PIN_HSMCI_MCDA2_GPIO            (PIO_PA26_IDX)
#define PIN_HSMCI_MCDA2_FLAGS           (IOPORT_MODE_MUX_C)
/** HSMCI MCDA3 pin definition. */
#define PIN_HSMCI_MCDA3_GPIO            (PIO_PA27_IDX)
#define PIN_HSMCI_MCDA3_FLAGS           (IOPORT_MODE_MUX_C)

/** SD/MMC card detect pin definition. */
#define PIN_HSMCI_CD                    {PIO_PD18, PIOD, ID_PIOD, PIO_INPUT, PIO_PULLUP}
#define SD_MMC_0_CD_GPIO                (PIO_PD18_IDX)
#define SD_MMC_0_CD_PIO_ID              ID_PIOD
#define SD_MMC_0_CD_FLAGS               (IOPORT_MODE_PULLUP)
#define SD_MMC_0_CD_DETECT_VALUE        0

/** EBI pins configuration for LCD */
/* Chip select number to be set */
#define BOARD_ILI9488_EBI_NPCS       3
/** LCD reset pin */
#define PIN_EBI_RESET_MASK	  PIO_PC13
#define PIN_EBI_RESET_PIO	  PIOC
#define PIN_EBI_RESET_TYPE    PIO_OUTPUT_1
#define PIN_EBI_RESET_ATTRI   PIO_DEFAULT

/** LCD command/data select pin */
#define PIN_EBI_CDS_MASK	  PIO_PC30
#define PIN_EBI_CDS_PIO		  PIOC
#define PIN_EBI_CDS_TYPE	  PIO_OUTPUT_1
#define PIN_EBI_CDS_ATTRI	  PIO_DEFAULT

/** LCD data pin */
#define PIN_EBI_DATAL_MASK     0xFF
#define PIN_EBI_DATAL_PIO	   PIOC
#define PIN_EBI_DATAL_TYPE	   PIO_PERIPH_A
#define PIN_EBI_DATAL_ATTRI    PIO_PULLUP

#define PIN_EBI_DATAH_0_MASK   0x3F
#define PIN_EBI_DATAH_0_PIO	   PIOE
#define PIN_EBI_DATAH_0_TYPE   PIO_PERIPH_A
#define PIN_EBI_DATAH_0_ATTRI  PIO_PULLUP

#define PIN_EBI_DATAH_1_MASK   (PIO_PA15A_D14|PIO_PA16A_D15)
#define PIN_EBI_DATAH_1_PIO	   PIOA
#define PIN_EBI_DATAH_1_TYPE   PIO_PERIPH_A
#define PIN_EBI_DATAH_1_ATTRI  PIO_PULLUP

/** LCD WE pin */
#define PIN_EBI_NWE_MASK   PIO_PC8A_NWE
#define PIN_EBI_NWE_PIO	   PIOC
#define PIN_EBI_NWE_TYPE   PIO_PERIPH_A
#define PIN_EBI_NWE_ATTRI  PIO_PULLUP

/** LCD RD pin */
#define PIN_EBI_NRD_MASK   PIO_PC11A_NRD
#define PIN_EBI_NRD_PIO	   PIOC
#define PIN_EBI_NRD_TYPE   PIO_PERIPH_A
#define PIN_EBI_NRD_ATTRI  PIO_PULLUP

/** LCD CS pin (NCS3) */
#define PIN_EBI_CS_MASK   PIO_PD19A_NCS3
#define PIN_EBI_CS_PIO	  PIOD
#define PIN_EBI_CS_TYPE   PIO_PERIPH_A
#define PIN_EBI_CS_ATTRI  PIO_PULLUP

/** Back-light pin definition. */
#define PIN_EBI_BACKLIGHT_MASK   PIO_PC9B_TIOB7
#define PIN_EBI_BACKLIGHT_PIO	  PIOC
#define PIN_EBI_BACKLIGHT_TYPE   PIO_PERIPH_B
#define PIN_EBI_BACKLIGHT_ATTRI  PIO_DEFAULT

/*! \name GPIO Connections of VBUS monitoring
 */
//! @{
#define USB_VBUS_FLAGS         (PIO_INPUT | PIO_PULLUP)
#define USB_VBUS_PIN             PIO_PC9_IDX  /* As IO pin input */
#define USB_VBUS_PIN_IRQn ( PIOC_IRQn)
#define USB_VBUS_PIO_ID       ID_PIOC
#define USB_VBUS_PIO_MASK  PIO_PC9 
//! @}

/*! \name GPIO Connections of ID detecting
 */
//! @{
#define USB_ID_FLAGS             (PIO_INPUT | PIO_PULLUP)
#define USB_ID_PIN               PIO_PC16_IDX /* As IO pin input */
#define USB_ID_PIN_IRQn     (PIOC_IRQn)
#define USB_ID_PIO_ID         ID_PIOC
#define USB_ID_PIO_MASK    PIO_PC16
//! @}

/** WM8904 Slave address */
#define WM8904_SLAVE_ADDRESS        (0x34 >> 1)

/** TWI interface for WM8904 */
#define WM8904_TWIHS  TWIHS0

/** WM8904 pins definition */
#define WM8904_TK_PIO       PIO_PB1_IDX
#define WM8904_TK_FLAGS     PIO_PERIPH_D
#define WM8904_TF_PIO       PIO_PB0_IDX
#define WM8904_TF_FLAGS     PIO_PERIPH_D
#define WM8904_TD_PIO       PIO_PD26_IDX
#define WM8904_TD_FLAGS     PIO_PERIPH_B
#define WM8904_RK_PIO       PIO_PA22_IDX
#define WM8904_RK_FLAGS     PIO_PERIPH_A
#define WM8904_RF_PIO       PIO_PD24_IDX
#define WM8904_RF_FLAGS     PIO_PERIPH_B
#define WM8904_RD_PIO       PIO_PA10_IDX
#define WM8904_RD_FLAGS     PIO_PERIPH_C
#define WM8904_PCK2_PIO     PIO_PA18_IDX
#define WM8904_PCK2_FLAGS   PIO_PERIPH_B

/**  Board SDRAM size for MT48LC16M16A2 */
#define BOARD_SDRAM_SIZE        (2 * 1024 * 1024)

/** Address for transferring command bytes to the SDRAM. */
#define BOARD_SDRAM_ADDR     0x70000000

/**  SDRAM pins definitions */
#define SDRAM_BA0_PIO        PIO_PA20_IDX
#define SDRAM_SDCK_PIO       PIO_PD23_IDX
#define SDRAM_SDCKE_PIO      PIO_PD14_IDX
#define SDRAM_SDCS_PIO       PIO_PC15_IDX
#define SDRAM_RAS_PIO        PIO_PD16_IDX
#define SDRAM_CAS_PIO        PIO_PD17_IDX
#define SDRAM_SDWE_PIO       PIO_PD29_IDX
#define SDRAM_NBS0_PIO       PIO_PC18_IDX
#define SDRAM_NBS1_PIO       PIO_PD15_IDX
#define SDRAM_A2_PIO         PIO_PC20_IDX
#define SDRAM_A3_PIO         PIO_PC21_IDX
#define SDRAM_A4_PIO         PIO_PC22_IDX
#define SDRAM_A5_PIO         PIO_PC23_IDX
#define SDRAM_A6_PIO         PIO_PC24_IDX
#define SDRAM_A7_PIO         PIO_PC25_IDX
#define SDRAM_A8_PIO         PIO_PC26_IDX
#define SDRAM_A9_PIO         PIO_PC27_IDX
#define SDRAM_A10_PIO        PIO_PC28_IDX
#define SDRAM_A11_PIO        PIO_PC29_IDX
#define SDRAM_SDA10_PIO      PIO_PD13_IDX
#define SDRAM_D0_PIO         PIO_PC0_IDX
#define SDRAM_D1_PIO         PIO_PC1_IDX
#define SDRAM_D2_PIO         PIO_PC2_IDX
#define SDRAM_D3_PIO         PIO_PC3_IDX
#define SDRAM_D4_PIO         PIO_PC4_IDX
#define SDRAM_D5_PIO         PIO_PC5_IDX
#define SDRAM_D6_PIO         PIO_PC6_IDX
#define SDRAM_D7_PIO         PIO_PC7_IDX
#define SDRAM_D8_PIO         PIO_PE0_IDX
#define SDRAM_D9_PIO         PIO_PE1_IDX
#define SDRAM_D10_PIO        PIO_PE2_IDX
#define SDRAM_D11_PIO        PIO_PE3_IDX
#define SDRAM_D12_PIO        PIO_PE4_IDX
#define SDRAM_D13_PIO        PIO_PE5_IDX
#define SDRAM_D14_PIO        PIO_PA15_IDX
#define SDRAM_D15_PIO        PIO_PA16_IDX

#define SDRAM_BA0_FLAGS      PIO_PERIPH_C
#define SDRAM_SDCK_FLAGS     PIO_PERIPH_C
#define SDRAM_SDCKE_FLAGS    PIO_PERIPH_C
#define SDRAM_SDCS_FLAGS     PIO_PERIPH_A
#define SDRAM_RAS_FLAGS      PIO_PERIPH_C
#define SDRAM_CAS_FLAGS      PIO_PERIPH_C
#define SDRAM_SDWE_FLAGS     PIO_PERIPH_C
#define SDRAM_NBS0_FLAGS     PIO_PERIPH_A
#define SDRAM_NBS1_FLAGS     PIO_PERIPH_C
#define SDRAM_A_FLAGS        PIO_PERIPH_A
#define SDRAM_SDA10_FLAGS    PIO_PERIPH_C
#define SDRAM_D_FLAGS        PIO_PERIPH_A

/** Image sensor definitions */
/** OV_SW_OVT pin definition */
#define OV_PWD_GPIO                    PIO_PC19_IDX
#define OV_PWD_FLAGS                   (PIO_OUTPUT_1 | PIO_DEFAULT)
#define OV_PWD_MASK                    PIO_PC19
#define OV_PWD_PIO                     PIOC
#define OV_PWD_ID                      ID_PIOC
#define OV_PWD_TYPE                    PIO_OUTPUT_1

/** OV_RST pin definition */
#define OV_RST_GPIO                    PIO_PB13_IDX
#define OV_RST_FLAGS                   (PIO_OUTPUT_1 | PIO_DEFAULT)
#define OV_RST_MASK                    PIO_PB13
#define OV_RST_PIO                     PIOB
#define OV_RST_ID                      ID_PIOB
#define OV_RST_TYPE                    PIO_OUTPUT_1

/** OV_PCK0 pin definition */
#define ISI_PCK0_PIO                   PIO_PA6_IDX
#define ISI_PCK0_FLAGS                 (PIO_PERIPH_B | PIO_DEFAULT)
#define ISI_PCK0_MASK                  PIO_PA6
#define ISI_PCK0_ID                    ID_PIOA
#define ISI_PCK0_TYPE                  PIO_OUTPUT_0

/** OV_PCK pin definition */
#define ISI_PCK_PIO                    PIO_PA24_IDX
#define ISI_PCK_FLAGS                  (PIO_PERIPH_D | PIO_DEFAULT)
#define ISI_PCK_MASK                   PIO_PA24
#define ISI_PCK_ID                     ID_PIOA
#define ISI_PCK_TYPE                   PIO_OUTPUT_0

/** OV_HSYNC pin definition */
#define ISI_HSYNC_PIO                  PIO_PD24_IDX
#define ISI_HSYNC_FLAGS                (PIO_PERIPH_D | PIO_IT_RISE_EDGE)
#define ISI_HSYNC_MASK                 PIO_PD24
#define ISI_HSYNC_ID                   ID_PIOD
#define ISI_HSYNC_TYPE                 PIO_PULLUP

/** OV_VSYNC pin definition */
#define ISI_VSYNC_PIO                  PIO_PD25_IDX
#define ISI_VSYNC_FLAGS                (PIO_PERIPH_D | PIO_IT_RISE_EDGE)
#define ISI_VSYNC_MASK                 PIO_PD25
#define ISI_VSYNC_ID                   ID_PIOD
#define ISI_VSYNC_TYPE                 PIO_PULLUP

/** OV Data Bus pins */
#define ISI_D0_PIO                 PIO_PD22_IDX
#define ISI_D1_PIO                 PIO_PD21_IDX
#define ISI_D2_PIO                 PIO_PB3_IDX
#define ISI_D3_PIO                 PIO_PA9_IDX
#define ISI_D4_PIO                 PIO_PA5_IDX
#define ISI_D5_PIO                 PIO_PD11_IDX
#define ISI_D6_PIO                 PIO_PD12_IDX
#define ISI_D7_PIO                 PIO_PA27_IDX
#define ISI_D8_PIO                 PIO_PD27_IDX
#define ISI_D9_PIO                 PIO_PD28_IDX
#define ISI_D10_PIO                PIO_PD30_IDX
#define ISI_D11_PIO                PIO_PD31_IDX
#define ISI_D0_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D1_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D2_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D3_FLAGS               PIO_PERIPH_B | PIO_PULLUP
#define ISI_D4_FLAGS               PIO_PERIPH_B | PIO_PULLUP
#define ISI_D5_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D6_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D7_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D8_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D9_FLAGS               PIO_PERIPH_D | PIO_PULLUP
#define ISI_D10_FLAGS              PIO_PERIPH_D | PIO_PULLUP
#define ISI_D11_FLAGS              PIO_PERIPH_D | PIO_PULLUP

/** TWI interface for OV7740 */
#define OV7740_TWIHS  TWIHS0

/*----------------------------------------------------------------------------*/
#endif   /* _SAMV71_XLTRA_H_ */
