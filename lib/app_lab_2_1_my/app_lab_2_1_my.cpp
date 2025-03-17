#include "app_lab_2_1_my.h"

// === SETUP FUNCTION ===
void app_lab_2_1_setup() {
    peripherals_setup();
    setup_timer();
}

// === MAIN LOOP FUNCTION ===
void app_lab_2_1_loop() {
    idle_task();
}
