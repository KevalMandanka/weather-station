
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  
  lcd.init();
  lcd.backlight();
  lcd.print("AURDINO WEATHER");
  lcd.setCursor(0,1);
  lcd.print("SYSTEM PROJECT");

}

void loop() {
  
  lcd.setCursor(12,1);
  //lcd.cursor();
  delay(1000);
  lcd.setCursor(12,1);
  //lcd.noCursor();
  delay(1000);
 // lcd.blink();
  
}
