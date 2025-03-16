#include <Arduino.h>
#include "config.h"      // Include centralized pin configuration
#include "peripherals.h" // Include the corresponding header file

void peripherals_setup() {
    Serial.begin(9600);
    
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(BUTTON1, INPUT_PULLUP);
    pinMode(BUTTON2, INPUT_PULLUP);
    pinMode(BUTTON3, INPUT_PULLUP);
}
