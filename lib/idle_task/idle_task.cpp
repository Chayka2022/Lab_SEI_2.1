#include "idle_task.h"

extern volatile bool led1_state;
extern volatile int state_var;

// === IDLE TASK: PRINT SYSTEM STATE ===
void idle_task() {   
    dd_LCD_setCursor(0, 0); 
    dd_LCD_print("LED1:");
    dd_LCD_print(led1_state ? "ON " : "OFF");
    dd_LCD_setCursor(0, 1);
    dd_LCD_print("LED2: ");
    dd_LCD_print(digitalRead(LED2) ? "ON " : "OFF");
    dd_LCD_setCursor(0, 2);
    dd_LCD_print("StateVar: ");
    dd_LCD_print(state_var);
}