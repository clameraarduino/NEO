#pragma once

// ===== WIFI =====
const char* WIFI_SSID = "TIM-20016575";
const char* WIFI_PASSWORD = "5PZInwyWIXTmAGKL2FZBZhko";

// ===== WEATHER =====
String CITY_NAME = "Gallarate";
float WEATHER_LAT = 45.6602;
float WEATHER_LON = 8.7921;

// ===== ALARM =====
int ALARM_HOUR = 7;
int ALARM_MINUTE = 30;
bool ALARM_ENABLED = true;

// ===== TIMER =====
unsigned long TIMER_DURATION = 0;  // In millisecondi

// ===== DISPLAY =====
#define DISPLAY_BRIGHTNESS_DAY 180
#define DISPLAY_BRIGHTNESS_NIGHT 80

// ===== NIGHT MODE =====
#define NIGHT_START_HOUR 21    // 21:00
#define NIGHT_END_HOUR 7       // 07:00
#define NIGHT_INACTIVITY_MS 30000  // 30 secondi di inattività per attivare sleep

// ===== TIMING =====
#define BLINK_INTERVAL 4000      // ms tra i blink
#define MOOD_CHANGE_INTERVAL 6500 // ms tra i cambi umore
#define WEATHER_UPDATE_INTERVAL (15 * 60 * 1000)  // 15 minuti
#define PAGE_REDRAW_FAST 1000    // 1s - pagine che cambiano spesso
#define PAGE_REDRAW_SLOW 60000   // 1m - pagine statiche

// ===== TOUCH =====
#define SWIPE_THRESHOLD 80       // pixel per considerare uno swipe
#define SWIPE_TIME_MAX 900       // ms massimi per uno swipe

// ===== COLORS (RGB565) =====
// Definite in display.h per accesso alle funzioni color565
