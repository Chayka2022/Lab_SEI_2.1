#include "task_scheduler.h"
#include "config.h"
#include "globals.h"
#include "task1_button_led.h"
#include "task2_led_blink.h"
#include "task3_state_var.h"
#include "idle_task.h"

// === TASK SCHEDULER ===
void task_scheduler() {
    if (--task1_counter <= 0) {
        task1_button_led();
        task1_counter = TASK1_REC;
    }
    if (--task2_counter <= 0) {
        task2_led_blink();
        task2_counter = TASK2_REC;
    }
    if (--task3_counter <= 0) {
        task3_state_var();
        task3_counter = TASK3_REC;
    }
}


// #include "task_scheduler.h"
// #include "config.h"
// #include "globals.h"
// #include "task1_button_led.h"
// #include "task2_led_blink.h"
// #include "task3_state_var.h"
// #include "idle_task.h"

// void task_scheduler_setup() {
//     timer_init_ISR_1KHz(TIMER_DEFAULT);
// }

// // === TASK SCHEDULER ===
// void task_scheduler() {
//     if (--task1_counter <= 0) {
//         task1_button_led();
//         task1_counter = TASK1_REC;
//     }
//     if (--task2_counter <= 0) {
//         task2_led_blink();
//         task2_counter = TASK2_REC;
//     }
//     if (--task3_counter <= 0) {
//         task3_state_var();
//         task3_counter = TASK3_REC;
//     }
// }

// void timer_handle_interrupts(int timer) {
//     if (timer == TIMER_DEFAULT)
//     {
//         task_scheduler();
//         }
//     }