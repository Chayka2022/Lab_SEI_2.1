#include "app_lab_2_1.h"
#include <Arduino.h>

#define SYS_TICK 1

#define SRV_HEARTBEAT_TASK_REC (500/SYS_TICK)
#define SRV_HEARTBEAT_TASK_OFFSET (10000/SYS_TICK)
int srv_heartbeat_task_counter = SRV_HEARTBEAT_TASK_OFFSET;

#define DUMMY_TASK_REC (1000/SYS_TICK)
#define DUMMY_TASK_OFFSET (20000/SYS_TICK)
int dummy_task_counter = DUMMY_TASK_REC;

void srv_sys_os_timer_setup(){

    TCCR1B |= (1 << WGM12);

    OCR1A = 16000;
    
    TIMSK1 |= (1 << OCIE1A);
    
    TCCR1B |= (1 << CS11) | (1 << CS10);
}


void dummy_task_setup()
{

}

void dummy_task_loop()
{
    Serial.println("Dummy Task");
}

void srv_sys_os_time_scheduler()
{
    if(--srv_heartbeat_task_counter <= 0)
    {
        srv_heartbeat_loop();
        srv_heartbeat_task_counter = SRV_HEARTBEAT_TASK_REC;
    }
    if(--dummy_task_counter <= 0)
    {
        dummy_task_loop();
        dummy_task_counter = DUMMY_TASK_REC;
    }
}

ISR(TIMER1_COMPA_vect) //Interupt service routine
{
    srv_sys_os_time_scheduler();
}

void app_lab_2_1_setup()
{

    srv_sys_os_timer_setup();

    //srv_serial_setup();

    srv_heartbeat_setup();
    srv_heartbeat_task_counter = SRV_HEARTBEAT_TASK_OFFSET;

    dummy_task_setup();
    dummy_task_counter = DUMMY_TASK_OFFSET;

    Serial.println("App Lab 2.1 setup Done");
}

void app_lab_2_1_loop()
{
    //srv_sys_os_time_scheduler();
    delay(1000*SYS_TICK);

    Serial.println("App Lab 2.1 Idle process");
}