#include "task2_led_blink.h"
#include "Arduino.h"
#include "config.h"
#include "globals.h"
#include "peripherals.h"

// === TASK 2: BLINK LED2 ONLY WHEN LED1 IS OFF ===
extern void task2_led_blink() {
    static bool led2_state = false;
    if (!led1_state) {
        led2_state = !led2_state;
        digitalWrite(LED2, led2_state);
    } else {
        digitalWrite(LED2, LOW);
    }
    Serial.print("LED2: ");
    Serial.println(digitalRead(LED2));
}