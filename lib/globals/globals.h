#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>

// --- GLOBAL STATE VARIABLES ---
extern volatile bool led1_state;
extern volatile int state_var;

extern int idle_counter;
extern int task1_counter;
extern int task2_counter;
extern int task3_counter;

#endif // GLOBALS_H
