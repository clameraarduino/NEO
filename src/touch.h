#pragma once

#include <Arduino.h>
#include "TouchDrvCSTXXX.hpp"
#include "pin_config.h"

// ===== EXTERNAL VARIABLES =====
extern TouchDrvCST92xx touch;
extern volatile bool touchFlag;
extern int16_t tx[5], ty[5];

// ===== PAGE MODES =====
enum PageMode {
  PAGE_FACE,
  PAGE_CLOCK,
  PAGE_TIMER,
  PAGE_ALARM,
  PAGE_WEATHER
};

extern PageMode pageMode;

// ===== FUNCTION DECLARATIONS =====
void setupTouch();
void handleTouch();
void IRAM_ATTR onTouch();
void nextPage();
void prevPage();
