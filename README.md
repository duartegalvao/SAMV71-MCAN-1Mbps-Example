# Atmel SAMV71 MCAN@1Mbps Example Project

This project is based on Atmel's MCAN Quick Start project for the SAMV71 Evaluation Kit.

## Modifications

### 2x CAN instances

The original example contains code for the usage of only one of the two available CAN controllers. In this project, the instance was doubled, and the controllers can be tested separately.

### MCAN Baudrate Patch

Atmel's ASF drivers for MCAN do not allow fine control of the baudrate parameters, so a patch is needed. The patch implemented here is based on the solution presented in @borkedLabs 2017 article: https://borkedlabs.com/blog/2017/09-24-samc21-same70-samv71-canbus-bosch-lessons-learned/

#### Bit timing values

Bit timing values, defined in `conf_mcan.h`, were obtained experimentally in order to achieve a 1Mbps baudrate.

### Transceiver Standby Control

Code was added to control the standby pins of external CAN transceivers that may be connected to the MCU.

## Acknowledgements

The base code for this example was developed by Microchip Technology Inc. and its subsidiaries. The baudrate patch was developed by @borkedLabs.
