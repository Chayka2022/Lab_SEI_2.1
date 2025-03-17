#ifndef CONFIG_H
#define CONFIG_H

// --- TIMER SETTINGS ---
#define SYS_TICK 1
#define TIMER_COMPARE_VALUE 16000  // Compare value for 1ms tick
#define TIMER_PRESCALER ((1 << CS11) | (1 << CS10)) // Prescaler 64

// --- TASK OFFSETS (First Execution Delay) ---
#define TASK1_OFFSET 1000
#define TASK2_OFFSET 5000
#define TASK3_OFFSET 2000

// --- TASK RECURRENCE SETTINGS ---
#define TASK1_REC (500 / SYS_TICK)
#define TASK2_REC (750 / SYS_TICK)
#define TASK3_REC (1000 / SYS_TICK)

// --- PIN CONFIGURATION ---
#define LED1 5
#define LED2 6
#define BUTTON1 7
#define BUTTON2 8
#define BUTTON3 9

#endif // CONFIG_H