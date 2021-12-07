void StopUr()
{
  lcd.setRGB(12, 235, 212);
  
  pinMode(6,INPUT);
  trykNu = digitalRead(6);

  //Et tryk 
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

    countStopWatch = tidNu-tidFoer;
  }

  trykFoer=trykNu;

  lcd.setCursor(0,0);
  lcd.print(countStopWatch/1000);
}
