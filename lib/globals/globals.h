#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include "dd_LCD_20x4(I2C).h"

// --- GLOBAL STATE VARIABLES ---
extern volatile bool led1_state;
extern volatile int state_var;

extern int idle_counter;
extern int task1_counter;
extern int task2_counter;
extern int task3_counter;

extern dd_LCD_4x4 lcd_device;  // Declare LCD as an external object

#endif // GLOBALS_H
