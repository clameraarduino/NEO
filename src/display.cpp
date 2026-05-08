#include "display.h"
#include "Arduino_GFX_Library.h"
#include "pin_config.h"

// ===== DISPLAY SETUP =====
Arduino_DataBus *bus = new Arduino_ESP32S3_DMA_Control(
  LCD_CS, LCD_SCLK, LCD_SDIO0, LCD_SDIO1, LCD_SDIO2, LCD_SDIO3);
Arduino_CO5300 *gfx = new Arduino_CO5300(bus, LCD_RESET);

// ===== COLORS =====
uint16_t cGlow = 0;    // 0, 70, 110
uint16_t cMain = 0;    // 0, 210, 255
uint16_t cLight = 0;   // 170, 255, 255
uint16_t cDim = 0;     // 0, 55, 80

void initDisplay() {
  gfx->begin();
  gfx->setRotation(1);
  
  // Convert colors to RGB565
  cGlow = gfx->color565(0, 70, 110);
  cMain = gfx->color565(0, 210, 255);
  cLight = gfx->color565(170, 255, 255);
  cDim = gfx->color565(0, 55, 80);
  
  gfx->fillScreen(0);
}

void setDisplayBrightness(int brightness) {
  // PWM brightness control on backlight pin if available
  // For now, we'll use software brightness via color reduction
  analogWrite(LCD_RESET, brightness);
}

void clearScreen() {
  gfx->fillScreen(0);
}

void rFillRoundRect(int x, int y, int w, int h, int r, uint16_t color) {
  gfx->fillRoundRect(x, y, w, h, r, color);
}

void rDrawRoundRect(int x, int y, int w, int h, int r, uint16_t color) {
  gfx->drawRoundRect(x, y, w, h, r, color);
}

void rFillCircle(int x, int y, int radius, uint16_t color) {
  gfx->fillCircle(x, y, radius, color);
}

void rDrawCircle(int x, int y, int radius, uint16_t color) {
  gfx->drawCircle(x, y, radius, color);
}

void rDrawLine(int x1, int y1, int x2, int y2, uint16_t color) {
  gfx->drawLine(x1, y1, x2, y2, color);
}

void rFillRect(int x, int y, int w, int h, uint16_t color) {
  gfx->fillRect(x, y, w, h, color);
}

void rDrawChar(char ch, int x, int y, int scale, uint16_t color) {
  // Simple character drawing - using basic bitmap approach
  gfx->setCursor(x, y);
  gfx->setTextColor(color);
  gfx->setTextSize(scale);
  gfx->print(ch);
}

void rDrawText(String text, int x, int y, int scale, uint16_t color) {
  gfx->setCursor(x, y);
  gfx->setTextColor(color);
  gfx->setTextSize(scale);
  gfx->print(text);
}

uint16_t colSkyDark() {
  return gfx->color565(10, 40, 80);
}

uint16_t colBlue1() {
  return gfx->color565(0, 80, 150);
}

uint16_t colBlue2() {
  return gfx->color565(0, 150, 220);
}

uint16_t colBlue3() {
  return gfx->color565(100, 200, 255);
}

uint16_t colRain() {
  return gfx->color565(150, 180, 220);
}

uint16_t colWhiteSoft() {
  return gfx->color565(240, 245, 255);
}
