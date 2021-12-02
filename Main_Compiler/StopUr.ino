#include <rgb_lcd.h>

#include <Wire.h>


void StopUr()
{
  trykNu= digitalRead(A1);


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

    count = tidNu-tidFoer;
  }

  trykFoer=trykNu;
}
