#ifndef IDLE_TASK
#define IDLE_TASK

#include "Arduino.h"
#include "config.h"
#include "dd_LCD_20x4(I2C).h"

// === IDLE TASK: PRINT SYSTEM STATE ===
void idle_task();

#endif