#ifndef DD_LED_H
#define DD_LED_H

#define DD_LED_PIN 13 // LED connected to pin 13

void dd_led_setup();
void dd_led_turn_on();     
void dd_led_turn_off();
void dd_led_toggle();
bool dd_led_is_on();
bool dd_led_read();

#endif