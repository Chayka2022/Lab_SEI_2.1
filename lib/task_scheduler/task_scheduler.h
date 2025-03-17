#ifndef TASK_SCHEDULER_H
#define TASK_SCHEDULER_H

#include "timer-api.h"
#include "config.h"
#include "task1_button_led.h"
#include "task2_led_blink.h"
#include "task3_state_var.h"

// === TASK SCHEDULER ===
void task_scheduler_setup();
void task_scheduler_loop(); 

#endif
