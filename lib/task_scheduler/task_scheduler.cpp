#include "task_scheduler.h"

volatile bool led1_state = false;
volatile int state_var = 0;

volatile int task1_counter = TASK1_OFFSET;
volatile int task2_counter = TASK2_OFFSET;
volatile int task3_counter = TASK3_OFFSET;

// void task_scheduler_setup() {
//     timer_init_ISR_1KHz(TIMER_DEFAULT);
// }

// void timer_handle_interrupts(int timer) {
//     if (timer == TIMER_DEFAULT)
//     {
//         task_scheduler_loop();
//     }
// }

// === TASK SCHEDULER ===
void task_scheduler_loop() {

    // static bool needSetup = true;
    // if (needSetup) {
    //     task_scheduler_setup();
    //     needSetup = false;
    // }

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