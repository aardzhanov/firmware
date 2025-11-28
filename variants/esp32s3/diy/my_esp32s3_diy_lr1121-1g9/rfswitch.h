#include "RadioLib.h"

static const uint32_t rfswitch_dio_pins[Module::RFSWITCH_MAX_PINS] = {RADIOLIB_LR11X0_DIO5, RADIOLIB_LR11X0_DIO6,
                                                                      RADIOLIB_LR11X0_DIO8, RADIOLIB_NC, RADIOLIB_NC};
// Table for NiceRF LoRa1121F33-1G9

static const Module::RfSwitchMode_t rfswitch_table[] = {
    // mode                 DIO5  DIO6  DIO8
    {LR11x0::MODE_STBY, {LOW, LOW, LOW}},   {LR11x0::MODE_RX, {LOW, LOW, LOW}},
    {LR11x0::MODE_TX, {LOW, LOW, HIGH}},    {LR11x0::MODE_TX_HP, {LOW, LOW, HIGH}},
    {LR11x0::MODE_TX_HF, {LOW, HIGH, LOW}}, {LR11x0::MODE_GNSS, {LOW, LOW, LOW}},
    {LR11x0::MODE_WIFI, {HIGH, LOW, LOW}},  END_OF_MODE_TABLE,
};
