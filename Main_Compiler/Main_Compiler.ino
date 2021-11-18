#include <Wire.h>
#include <MMA7660.h>
#include <rgb_lcd.h>
#include <DS1307.h>
DS1307 clock; //define clock


rgb_lcd lcd;
int SensorValue;

float x, y, z;
MMA7660 accelmeter;
bool buttonPressed = false;
bool buttonBefore = false;
int count;

int sek = 0;
int minut = 0;

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

}

void loop() 
{
  int state = Accelarometer();
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);

  if(state == 0)
  {
    Clock();
  }
  if(state == 1)
  {
    lcd.print(StopWatch());
  }
  if(state == 2)
  {
    //Shows temp on lcd
    temperature();
    lcd.print(SensorValue);
  }  
}
