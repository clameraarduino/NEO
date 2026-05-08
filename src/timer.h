#pragma once

#include <Arduino.h>
#include "display.h"

// ===== TIMER STATES =====
enum TimerState {
  TIMER_IDLE,
  TIMER_RUNNING,
  TIMER_PAUSED,
  TIMER_FINISHED
};

// ===== EXTERNAL VARIABLES =====
extern unsigned long timerDuration;
extern unsigned long timerStartTime;
extern unsigned long timerPausedTime;
extern TimerState timerState;

// ===== FUNCTION DECLARATIONS =====
void startTimer(unsigned long durationMs);
void pauseTimer();
void resumeTimer();
void resetTimer();
unsigned long getTimerRemaining();
void drawTimerPage();
void updateTimer();
