/**
 * I2C/IIC LCD Serial Adapter Module Example
 *
 * This uses the Liquid Crystal library
 *      SCL = A5
 *      SDA = A4
 *      VCC = 5V
 *      GND = GND
 */
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C  lcd(0x27,2,1,0,4,5,6,7); // 0x27 is the I2C bus address for an unmodified module

void setup()
{
    lcd.setBacklightPin(3,POSITIVE);
    lcd.setBacklight(LOW); // NOTE: You can turn the backlight off by setting it to LOW instead of HIGH
    lcd.begin(16, 2);
    lcd.clear();
}

void loop()
{
    lcd.setCursor(0,0);
    lcd.print("Pedro Branches1");
    lcd.setCursor(0,1);
    lcd.print("Teste Primeiro1");
    delay(1000);
     lcd.setCursor(0,0);
    lcd.print("Pedro Branches2");
    lcd.setCursor(0,1);
    lcd.print("Teste Primeiro2");
    delay(1000);
     lcd.setCursor(0,0);
    lcd.print("ola");
    lcd.setCursor(0,1);
    lcd.print("adeus");
    delay(1000);
}
