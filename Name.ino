void studentName() 
{
  pinMode(6, INPUT);
  trykNu = digitalRead(6);
  
  lcd.print("Tryk paa knappen");
  
  if(trykNu == true && flag == false)
  {
    lcd.clear();
    flag == true;
    randomName = random(1, 30);
    }
  
  lcd.setCursor(0,1);
  
  if(randomName == 30)
  {
    lcd.print("Jabriil");
    delay(1000);
  }
  if(randomName == 1)
  {
    lcd.print("Thoeger");
    delay(1000);
  }
  if(randomName == 2)
  {
    lcd.print("Ismail");
    delay(1000);
  }
  if(randomName == 3)
  {
    lcd.print("Haris");
    delay(1000);
  }
  if(randomName == 4)
  {
    lcd.print("Taaha");
    delay(1000);
  }
  if(randomName == 5)
  {
    lcd.print("Mathias");
    delay(1000);
  }
  if(randomName == 6)
  {
    lcd.print("Emil");
    delay(1000);
  }
  if(randomName == 7)
  {
    lcd.print("Robert");
    delay(1000);
  }
  if(randomName == 8)
  {
    lcd.print("Tobias");
    delay(1000);
  }
  if(randomName == 9)
  {
    lcd.print("Ludvig");
    delay(1000);
  }
  if(randomName == 10)
  {
    lcd.print("Fahmi");
    delay(1000);
  }
  if(randomName == 11)
  {
    lcd.print("Jonathan");
    delay(1000);
  }
  if(randomName == 12)
  {
    lcd.print("Simon");
    delay(1000);
  }
  if(randomName == 13)
  {
    lcd.print("Jeppe");
    delay(1000);
  }
  if(randomName == 14)
  {
    lcd.print("William");
    delay(1000);
  }
  if(randomName == 15)
  {
    lcd.print("Anders");
    delay(1000);
  }
  if(randomName == 16)
  {
    lcd.print("Rasmus");
    delay(1000);
  }
  if(randomName == 17)
  {
    lcd.print("Lovro");
    delay(1000);
  }
  if(randomName == 18)
  {
    lcd.print("Pernille");
    delay(1000);
  }
  if(randomName == 19)
  {
    lcd.print("Sarah");
    delay(1000);
  }
  if(randomName == 20)
  {
    lcd.print("Gustav Wett");
    delay(1000);
  }
  if(randomName == 21)
  {
    lcd.print("Gustav Werk");
    delay(1000);
  }
  if(randomName == 22)
  {
    lcd.print("Silas");
    delay(1000);
  }
  if(randomName == 23)
  {
    lcd.print("Freja");
    delay(1000);
  }
  if(randomName == 24)
  {
    lcd.print("Jacob");
  }
  if(randomName == 25)
  {
    lcd.print("Kasper");
  }
  if(randomName == 26)
  {
    lcd.print("Nelisa");
  }
  if(randomName == 27)
  {
    lcd.print("Mohammed");
  }
  if(randomName == 28)
  {
    lcd.print("Nicolai");
  }
  if(randomName == 29)
  {
    lcd.print("Mie");
  }
}
