#include <rgb_lcd.h>

#include <Wire.h>

unsigned long tidNu;
unsigned long tidFoer;
float count;
rgb_lcd lcd;
bool trykFoer;
bool trykNu;
bool urStop;


void setup() 
{
  pinMode(A1,INPUT);
  lcd.begin(16,2);
  lcd.setRGB(0,0,255);
  tidFoer = millis(); 
}


void loop() 
{

   lcd.setCursor(0,0);
   lcd.print(count/1000);
   StopUr();
}

void StopUr()
{
  trykNu = digitalRead(A1);


  if (trykNu == true && trykFoer ==false)
  {
    if (urStop==false)
    {
      urStop=true;
    }
    else 
    {
      urStop=false;

      //Her skal uret nulstilles. Det er det eneste problem. det sker ikke
      tidFoer = tidNu;
      lcd.clear();
    
    } 
  }
  
  if (urStop==false)
  {
    tidNu = millis();
    count = tidNu - tidFoer;
  }

  trykFoer=trykNu;
}
