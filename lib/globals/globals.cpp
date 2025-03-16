#include "globals.h"
#include "config.h"

volatile bool led1_state = false;
volatile int state_var = 0;

// --- TASK TIMERS ---
int task1_counter = TASK1_OFFSET;  // Start with an offset
int task2_counter = TASK2_OFFSET;
int task3_counter = TASK3_OFFSET;
int idle_counter = IDLE_OFFSET;