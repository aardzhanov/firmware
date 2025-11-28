// NanoVHF T-Energy-S3 + E22(0)-xxxM - DIY
// https://github.com/NanoVHF/Meshtastic-DIY/tree/main/PCB/ESP-32-devkit_EBYTE-E22/Mesh-v1.06-TTGO-T18

// Battery
#define BATTERY_PIN 1
#define ADC_MULTIPLIER 2.0
#define ADC_CHANNEL ADC1_GPIO3_CHANNEL

// Button on NanoVHF PCB
#define BUTTON_PIN 0

// I2C via connectors on NanoVHF PCB
#define I2C_SCL 18
#define I2C_SDA 17

// Screen (disabled)
#define HAS_SCREEN 0 // Assume no screen present by default to prevent crash...

// GPS via T-Energy-S3 onboard connector
// #define HAS_GPS 0
// #define GPS_TX_PIN 43
// #define GPS_RX_PIN 44

// LoRa
#define USE_LR1121 // E22-400M30S, E22-400M33S, E22-400M22S, and E22-400MM22S use SX1268

#define LORA_SCK 10
#define LORA_MISO 6
#define LORA_MOSI 7
#define LORA_CS 9
#define LORA_RESET 5
#define LORA_DIO1 4
#define LORA_DIO2 8

#define LR1121_IRQ_PIN LORA_DIO1
#define LR1121_NRESET_PIN LORA_RESET
#define LR1121_BUSY_PIN LORA_DIO2
#define LR1121_SPI_NSS_PIN LORA_CS
#define LR1121_SPI_SCK_PIN LORA_SCK
#define LR1121_SPI_MOSI_PIN LORA_MOSI
#define LR1121_SPI_MISO_PIN LORA_MISO
#define LR11X0_DIO3_TCXO_VOLTAGE 3.0
#define LR11X0_DIO_AS_RF_SWITCH
