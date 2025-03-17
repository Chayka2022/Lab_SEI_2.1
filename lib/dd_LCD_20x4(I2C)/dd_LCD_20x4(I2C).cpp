#include "dd_LCD_20x4(I2C).h"

// Конструктор
dd_LCD_4x4::dd_LCD_4x4(uint8_t lcd_addr, uint8_t cols, uint8_t rows)
    : lcd(lcd_addr, cols, rows) {}  // Передаем параметры дисплея в объект `lcd`

void dd_LCD_4x4::init() {
    lcd.init();      // Инициализируем дисплей
    lcd.backlight(); // Включаем подсветку
    lcd.clear();     // Очищаем дисплей
    lcd.setCursor(0, 0);
}

// Установка курсора
void dd_LCD_4x4::setCursor(uint8_t col, uint8_t row) {
    lcd.setCursor(col, row);
}

// Очистка экрана
void dd_LCD_4x4::clear() {
    lcd.clear();
}

// Вывод строки на дисплей
void dd_LCD_4x4::print(const char* message) {
    lcd.print(message);
}

// Вывод числа на дисплей
void dd_LCD_4x4::print(int value) {
    lcd.print(value);
}

// Вывод объекта String
void dd_LCD_4x4::printMessage(const String &message) {
    lcd.print(message);
}

void dd_LCD_4x4::updatePinDisplay(const char* pin) {
    lcd.setCursor(0, 1);  // Move to the second row of the LCD
    lcd.print(pin); 
    lcd.print("    "); // Extra spaces to clear any old characters
}

void dd_LCD_4x4::displayMessage(const char* message, uint8_t col, uint8_t row) {
    lcd.setCursor(col, row);
    lcd.print(message);
}

void dd_LCD_4x4::clearRow(int row) {
    lcd.setCursor(0, row);  // Move cursor to the start of the specified row
    for (int i = 0; i < 20; i++) {  // Assuming a 20-character wide LCD
      lcd.print(" ");  // Print a space to clear each character
    }
    lcd.setCursor(0, row);  // Return the cursor to the start of the row
}
