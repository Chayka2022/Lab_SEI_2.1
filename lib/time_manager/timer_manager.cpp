#include "timer_manager.h"   // Include function declaration

// === TIMER SETUP FUNCTION ===
void setup_timer() {
    TCCR1B |= (1 << WGM12);  // Set CTC mode
    OCR1A = TIMER_COMPARE_VALUE;  // Use defined compare value
    TIMSK1 |= (1 << OCIE1A); // Enable compare match interrupt
    TCCR1B |= TIMER_PRESCALER; // Use defined prescaler
}

// === TIMER INTERRUPT HANDLER ===
ISR(TIMER1_COMPA_vect) {
    task_scheduler_loop();
}