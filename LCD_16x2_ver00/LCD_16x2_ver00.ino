#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); 

void setup() {
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:
  lcd.print("hello, world!");
}

void loop() {
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 1);  // column 0, line 1
  lcd.print("Hey, my friend!");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 1);  // column 0, line 1
  lcd.print(millis() / 1000); // print the number of seconds since reset:
}
