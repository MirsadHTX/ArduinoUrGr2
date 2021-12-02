#include <Wire.h>
#include <MMA7660.h>
#include <rgb_lcd.h>
#include <DS1307.h>
DS1307 clock; //define clock
rgb_lcd lcd;

int SensorValue;

//Variabler til funktion "Accelarometer_int"
float x, y, z;
MMA7660 accelmeter;
/*bool buttonPressed = false;
  bool buttonBefore = false;*/
bool flag;
int count;

//Variabler til funktion "Clock"
int sek = 0;
int minut = 0;

//Variabler til funktion "Name"
int randomName;
int state;
int options;

//Variabler til funktion "StopUr"
unsigned long tidNu;
unsigned long tidFoer;
float countStopWatch;
bool trykFoer;
bool trykNu;
bool urStop;

void setup()
{
  accelmeter.init();
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  //Setup for StopUr
  tidFoer = millis();
  pinMode(6,INPUT);
}

void loop()
{
  state = Accelarometer();
  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);


  //Viser UTC Dansk tid
  if (state == 1)
  {
    lcd.clear();
    PrintTime();
  }
  //Funktion StopUr Begynder
  if (state == 0)
  {
    lcd.clear();
    StopUr();
    delay(10);
  }

  //Viser SensorValue på lcd
  if (state == 2)
  {
    lcd.clear();
    temperature();
    lcd.print(SensorValue);
  }
  if (state == 3)
  {
    lcd.clear();
    studentName();
  }
  delay(50);
}
