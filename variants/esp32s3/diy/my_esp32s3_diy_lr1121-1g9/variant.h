#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

#define USE_SSD1306

#define I2C_SDA 18 // 1 // I2C pins for this board
#define I2C_SCL 17 // 2

#define BUTTON_PIN 0 // This is the BOOT button
#define BUTTON_NEED_PULLUP

#define USE_LR1121

#define LORA_MISO 3
#define LORA_SCK 5
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RESET 8
#define LORA_DIO1 16
#define LORA_DIO2 15

#define LR1121_IRQ_PIN LORA_DIO1      // IRQ
#define LR1121_NRESET_PIN LORA_RESET  // RESET
#define LR1121_BUSY_PIN LORA_DIO2     // BUSY
#define LR1121_SPI_NSS_PIN LORA_CS    // NSS
#define LR1121_SPI_SCK_PIN LORA_SCK   // SCK
#define LR1121_SPI_MOSI_PIN LORA_MOSI // MOSI
#define LR1121_SPI_MISO_PIN LORA_MISO // MISO
#define LR11X0_DIO3_TCXO_VOLTAGE 3.0
#define LR11X0_DIO_AS_RF_SWITCH