#include "task3_state_var.h"

extern volatile int state_var;

// === TASK 3: STATE VARIABLE INCREMENT/DECREMENT ===
extern void task3_state_var() {
    if (digitalRead(BUTTON2) == LOW) {
        delay(10);
        if (digitalRead(BUTTON2) == LOW) {
            state_var++;
        }
        while (digitalRead(BUTTON2) == LOW);
    }

    if (digitalRead(BUTTON3) == LOW) {
        delay(10);
        if (digitalRead(BUTTON3) == LOW) {
            state_var--;
        }
        while (digitalRead(BUTTON3) == LOW);
    }

    Serial.print("StateVar: ");
    Serial.println(state_var);
}