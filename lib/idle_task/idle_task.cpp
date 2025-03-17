#include "idle_task.h"
#include "Arduino.h"
#include "config.h"
#include "globals.h"
#include "peripherals.h"
#include "dd_LCD_20x4(I2C).h"

// === IDLE TASK: PRINT SYSTEM STATE ===
void idle_task() {   
    lcd_device.setCursor(0, 0); 
    lcd_device.printMessage("LED1:");
    lcd_device.print(led1_state ? "ON " : "OFF");
    lcd_device.setCursor(0, 1);
    lcd_device.print("LED2: ");
    lcd_device.print(digitalRead(LED2) ? "ON " : "OFF");
    lcd_device.setCursor(0, 2);
    lcd_device.print("StateVar: ");
    lcd_device.print(state_var);
}