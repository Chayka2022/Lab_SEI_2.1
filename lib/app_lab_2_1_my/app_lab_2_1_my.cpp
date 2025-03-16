#include "app_lab_2_1_my.h"
#include <Arduino.h>
#include "peripherals.h"
#include "timer_manager.h"

// === SETUP FUNCTION ===
void app_lab_2_1_setup() {
    peripherals_setup();
    setup_timer();
    Serial.println("System Initialized");
}

// === MAIN LOOP FUNCTION ===
void app_lab_2_1_loop() {
    delay(1000);
}
