#pragma once

#include <Arduino.h>
#include "Arduino_GFX_Library.h"
#include "pin_config.h"

// ===== DISPLAY INITIALIZATION =====
extern Arduino_DataBus *bus;
extern Arduino_CO5300 *gfx;

// ===== COLORS =====
extern uint16_t cGlow, cMain, cLight, cDim;

// ===== FUNCTION DECLARATIONS =====

// Initialization
void initDisplay();
void setDisplayBrightness(int brightness);

// Rotated drawing functions (90° rotation)
void rFillRoundRect(int x, int y, int w, int h, int r, uint16_t color);
void rDrawRoundRect(int x, int y, int w, int h, int r, uint16_t color);
void rFillCircle(int x, int y, int radius, uint16_t color);
void rDrawCircle(int x, int y, int radius, uint16_t color);
void rDrawLine(int x1, int y1, int x2, int y2, uint16_t color);
void rFillRect(int x, int y, int w, int h, uint16_t color);

// Text rendering (5x7 font rotated)
void rDrawChar(char ch, int x, int y, int scale, uint16_t color);
void rDrawText(String text, int x, int y, int scale, uint16_t color);

// Utility
void clearScreen();
uint16_t colSkyDark();
uint16_t colBlue1();
uint16_t colBlue2();
uint16_t colBlue3();
uint16_t colRain();
uint16_t colWhiteSoft();
