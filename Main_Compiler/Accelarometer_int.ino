int Accelarometer()
{
  lcd.begin(16, 2);
  accelmeter.init();

  
  lcd.setCursor(0, 0);
  accelmeter.getAcceleration(&x, &y, &z); // Tager memory address som input


  lcd.setCursor(0, 1);

  lcd.print(count);
  if(y > 0.98 || y < -0.98)
  {
    buttonPressed = true;
  }
  if(y > 0.98 && buttonBefore == false && buttonPressed == true)
  {
    count += 1;
  }
  if(y < -0.98 && buttonBefore == false && buttonPressed == true)
  {
    count -= 1;
  }
  buttonBefore = buttonPressed;

  if(count == 5)
  {
    count = 0;
  }
  if (count == -1)
  {
    count = 4;
  }
  
  delay(50);

  return count;
}
