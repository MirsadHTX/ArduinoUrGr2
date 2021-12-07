int Accelarometer()
{
    accelmeter.getAcceleration(&x, &y, &z); // Tager memory address som input
    pinMode(5, OUTPUT);

    //switches states 
    if (x >= 1 && flag == false)
    {
      count += 1;
      flag = true;
      /*
      digitalWrite(5, HIGH);
      delay(100);
      digitalWrite(5, LOW);
      */
    }

    if (x <= -0.8 && flag == false)
    {
      count -=1;
      flag = true;
    }

    // reset flag
    if (x > -0.5 && x < 0.5)
    {
      flag = false;
    }

    //Min state
    if (count == -1)
    {
      count = 5;
    }
    //max state
    if (count == 6)
    {
      count = 0;
    }
  
  delay(10);

  return count;
  
  /*lcd.begin(16, 2);
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

  return;*/
}
