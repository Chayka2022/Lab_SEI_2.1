#include "app_lab_2_1_my.h"
#include <Arduino.h>
#include "peripherals.h"
#include "timer_manager.h"
#include "idle_task.h"
#include "globals.h"  // Include global LCD manager

//dd_LCD_4x4 lcd_device(0x27, 20, 4);  // Define LCD object here


// === SETUP FUNCTION ===
void app_lab_2_1_setup() {
    lcd_device.init();
    peripherals_setup();
    setup_timer();
}

// === MAIN LOOP FUNCTION ===
void app_lab_2_1_loop() {
    idle_task();
}
