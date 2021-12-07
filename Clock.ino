
#include <rgb_lcd.h>
#include <Wire.h>

void PrintTime()
{
    clock.getTime();
    
    lcd.setCursor(0, 0);
    lcd.print(clock.hour, DEC);
    lcd.print(":");
    lcd.print(clock.minute, DEC);
    lcd.print(":");
    lcd.print(clock.second, DEC);
    lcd.print("  ");
    
    lcd.setCursor(0, 1);
    lcd.print(clock.dayOfMonth, DEC);
    lcd.print("/");
    lcd.print(clock.month, DEC);
    lcd.print("/");
    lcd.print(clock.year+2000, DEC);
    delay(100);
    lcd.clear();
}
