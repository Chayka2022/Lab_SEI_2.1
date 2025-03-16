#include "idle_task.h"
#include "Arduino.h"
#include "config.h"
#include "globals.h"
#include "peripherals.h"

// === IDLE TASK: PRINT SYSTEM STATE ===
void idle_task() {
    Serial.print("LED1: ");
    Serial.print(led1_state);
    Serial.print(" | LED2: ");
    Serial.print(digitalRead(LED2));
    Serial.print(" | StateVar: ");
    Serial.println(state_var);
}