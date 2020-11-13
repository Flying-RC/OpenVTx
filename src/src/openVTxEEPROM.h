#pragma once

#include <stdint.h>

#define versionEEPROM 0

extern uint8_t updateEEPROM;

typedef enum
{
  TRAMP,
  SMARTAUDIO
} vtxMode_e;

typedef struct
{
    uint16_t version;
    vtxMode_e vtxMode;
    uint16_t currFreq;
    uint8_t channel;
    uint8_t freqMode;
    uint8_t pitmodeInRange;
    uint8_t pitmodeOutRange;
    uint16_t currPowermW;
    uint8_t currPowerdB;
    uint8_t currPowerIndex;
    uint8_t unlocked;
} openVTxEEPROM;

extern openVTxEEPROM myEEPROM;

void defaultEEPROM(void);
void readEEPROM(void);
void writeEEPROM(void);
