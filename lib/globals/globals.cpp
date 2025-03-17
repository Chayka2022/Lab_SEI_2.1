#include "globals.h"
#include "config.h"
#include "dd_LCD_20x4(I2C).h"

volatile bool led1_state = false;
volatile int state_var = 0;

// --- TASK TIMERS ---
int task1_counter = TASK1_OFFSET;  // Start with an offset
int task2_counter = TASK2_OFFSET;
int task3_counter = TASK3_OFFSET;
int idle_counter = IDLE_OFFSET;

dd_LCD_4x4 lcd_device(0x27, 20, 4);  // Declare LCD as an external object