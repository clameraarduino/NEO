#pragma once

#include <Arduino.h>
#include "face.h"
#include "time_mgmt.h"

// ===== EXTERNAL VARIABLES =====
extern int ALARM_HOUR;
extern int ALARM_MINUTE;
extern bool ALARM_ENABLED;
extern bool alarmRangToday;
extern unsigned long alarmUntil;

// ===== FUNCTION DECLARATIONS =====
void checkAlarm();
void setAlarmTime(int hour, int minute);
void toggleAlarmEnabled();
void drawAlarmPage();
