#ifndef CONFIG_H
#define CONFIG_H

// --- TIMER SETTINGS ---
#define SYS_TICK 1.2
#define TIMER_COMPARE_VALUE 16000  // Compare value for 1ms tick
#define TIMER_PRESCALER ((1 << CS11) | (1 << CS10)) // Prescaler 64

// --- TASK OFFSETS (First Execution Delay) ---
#define TASK1_OFFSET 500  // Starts after 100ms
#define TASK2_OFFSET 1500  // Starts after 300ms
#define TASK3_OFFSET 2500  // Starts after 500ms
#define IDLE_OFFSET  3500  // Starts after 700ms

// --- TASK RECURRENCE SETTINGS ---
#define TASK1_REC (500 / SYS_TICK)
#define TASK2_REC (5000 / SYS_TICK)
#define TASK3_REC (1000 / SYS_TICK)
#define IDLE_REC  (10000 / SYS_TICK)

// --- PIN CONFIGURATION ---
#define LED1 5
#define LED2 6
#define BUTTON1 7
#define BUTTON2 8
#define BUTTON3 9

#endif // CONFIG_H