#pragma once

#include <Arduino.h>
#include <time.h>

// ===== FUNCTION DECLARATIONS =====
bool getTimeInfo(struct tm &timeinfo);
String timeNow();
String dateNowCompact();
String weekdayName();
int hourNow();
int minuteNow();
int secondNow();
String twoDigits(int n);
