#pragma once

#include <Arduino.h>
#include "display.h"

// ===== FACE MODES =====
enum FaceMode {
  FACE_NEUTRAL,
  FACE_HAPPY,
  FACE_CURIOUS,
  FACE_SLEEP,
  FACE_ALARM,
  FACE_BLINK
};

// ===== EXTERNAL VARIABLES =====
extern FaceMode faceMode;
extern int modeIndex;
extern unsigned long lastBlink;
extern unsigned long lastMoodChange;
extern unsigned long alarmUntil;

// ===== FUNCTION DECLARATIONS =====
void drawEye(int x, int y, int w, int h);
void drawNeutral();
void drawHappy();
void drawCurious();
void drawSleep();
void drawAlarmFace();
void drawBlink();
void drawFace(FaceMode mode);
void updateFaceAnimations(unsigned long now);
void setFaceMode(FaceMode mode);
