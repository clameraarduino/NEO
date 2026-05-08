#pragma once

#include <Arduino.h>
#include "display.h"
#include "time_mgmt.h"

// ===== EXTERNAL VARIABLES =====
extern unsigned long lastInteraction;

// ===== FUNCTION DECLARATIONS =====
void updatePowerMode(unsigned long now);
bool isNightMode();
bool shouldEnterSleep();
void enterSleep();
void exitSleep();
