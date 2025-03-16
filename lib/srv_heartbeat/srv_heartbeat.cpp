#include "srv_heartbeat.h"
#include "dd_led.h"
#include "Arduino.h"

void srv_heartbeat_setup(){
    Serial.begin(9600); 
    dd_led_setup();
}

void srv_heartbeat_loop(){
    dd_led_toggle();
    Serial.println("Heartbeat");
}
