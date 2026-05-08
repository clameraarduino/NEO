#pragma once

#include <Arduino.h>
#include "display.h"

// ===== EXTERNAL VARIABLES =====
extern bool weatherValid;
extern float temperature;
extern int weatherCode;
extern unsigned long lastWeather;
extern bool wifiOk;

// ===== FUNCTION DECLARATIONS =====
void connectWifi();
void getWeather();
void drawWeatherBackground();
void drawWeatherIconRealistic();
void drawWeatherPageRealistic();
float extractCurrentNumber(String json, String key);
