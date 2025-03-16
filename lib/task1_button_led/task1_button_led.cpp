#include "task1_button_led.h"
#include "Arduino.h"
#include "config.h"
#include "globals.h"
#include "peripherals.h"

// === TASK 1: TOGGLE LED1 ON BUTTON PRESS ===
extern void task1_button_led() {
    if (digitalRead(BUTTON1) == LOW) { 
        delay(10); // Debounce
        if (digitalRead(BUTTON1) == LOW) {
            led1_state = !led1_state;
            digitalWrite(LED1, led1_state);
        }
        while (digitalRead(BUTTON1) == LOW);
    }
    Serial.print("LED1: ");
    Serial.println(led1_state);
}