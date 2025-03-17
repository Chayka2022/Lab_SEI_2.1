#ifndef LCD_MANAGER_H
#define LCD_MANAGER_H

#include <Wire.h>               // Подключаем библиотеку для I2C
#include <LiquidCrystal_I2C.h>  // Библиотека для работы с LCD 20x4 по I2C

class dd_LCD_4x4 {
public:
    dd_LCD_4x4(uint8_t lcd_addr, uint8_t cols, uint8_t rows);  // Конструктор
    void init();             // Инициализация дисплея
    void displayMessage(const char* message, uint8_t col, uint8_t row); // Вывести сообщение
    void updatePinDisplay(const char* pin);  // New method
    void clearRow(int row);

    void clear();                // Очистить экран
    void setCursor(uint8_t col, uint8_t row);  // Установить курсор
    void print(const char* message);  // Печать строки
    void print(int value);            // Печать числа
    void printMessage(const String &message); // Печать строки объекта Stringx

private:
    LiquidCrystal_I2C lcd;   // Объект для управления LCD
};

#endif
