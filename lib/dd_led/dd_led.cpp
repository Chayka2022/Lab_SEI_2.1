#include "dd_led.h"
#include <Arduino.h> // Include Arduino core library for pin control

// Variable to track the LED state
static bool led_state = LOW; // Default state is OFF

// Initialize the LED pin
void dd_led_setup() {
    pinMode(DD_LED_PIN, OUTPUT);       // Set the pin as an output
    digitalWrite(DD_LED_PIN, led_state); // Set the initial state
}

// Turn the LED on
void dd_led_turn_on() {
    led_state = HIGH;                  // Set the state to HIGH
    digitalWrite(DD_LED_PIN, led_state); // Update the LED pin
}

// Turn the LED off
void dd_led_turn_off() {
    led_state = LOW;                   // Set the state to LOW
    digitalWrite(DD_LED_PIN, led_state); // Update the LED pin
}

// Toggle the LED state
void dd_led_toggle() {
    led_state = !led_state;            // Toggle the state
    digitalWrite(DD_LED_PIN, led_state); // Update the LED pin
}

// Check if the LED is on
bool dd_led_is_on() {
    return led_state == HIGH;           // Return true if the LED is on
}

// Read the current state of the LED pin
bool dd_led_read() {
    return digitalRead(DD_LED_PIN);     // Read the actual state of the pin
}
