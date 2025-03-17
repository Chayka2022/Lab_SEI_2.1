#include "peripherals.h"

void peripherals_setup(){
    Serial.begin(9600);
    
    dd_LCD_setup(0x27, 20, 4);

    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(BUTTON1, INPUT_PULLUP);
    pinMode(BUTTON2, INPUT_PULLUP);
    pinMode(BUTTON3, INPUT_PULLUP);
}
