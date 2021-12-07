void studentName() 
{
  lcd.print("Tryk på knappen for navn");
  if(digitalRead(6) == true)
  {
    randomName = random(1, 24);
    delay(100);
  }
  

  if(randomName == 0)
  {
    lcd.print("Jabriil");
  }
  if(randomName == 1)
  {
    lcd.print("Thøger");
  }
  if(randomName == 2)
  {
    lcd.print("Ismail");
  }
  if(randomName == 3)
  {
    lcd.print("Haris");
  }
  if(randomName == 4)
  {
    lcd.print("Taaha");
  }
  if(randomName == 5)
  {
    lcd.print("Mathias");
  }
  if(randomName == 6)
  {
    lcd.print("Emil");
  }
  if(randomName == 7)
  {
    lcd.print("Robert");
  }
  if(randomName == 8)
  {
    lcd.print("Tobias");
  }
  if(randomName == 9)
  {
    lcd.print("Ludvig");
  }
  if(randomName == 10)
  {
    lcd.print("Fahmi");
  }
  if(randomName == 11)
  {
    lcd.print("Jonathan");
  }
  if(randomName == 12)
  {
    lcd.print("Simon");
  }
  if(randomName == 13)
  {
    lcd.print("Jeppe");
  }
  if(randomName == 14)
  {
    lcd.print("William");
  }
  if(randomName == 15)
  {
    lcd.print("Anders");
  }
  if(randomName == 16)
  {
    lcd.print("Rasmus");
  }
  if(randomName == 17)
  {
    lcd.print("Lovro");
  }
  if(randomName == 18)
  {
    lcd.print("Pernille");
  }
  if(randomName == 19)
  {
    lcd.print("Sarah");
  }
  if(randomName == 20)
  {
    lcd.print("Gustav Wett");
  }
  if(randomName == 21)
  {
    lcd.print("Gustav Werk");
  }
  if(randomName == 22)
  {
    lcd.print("Silas");
  }
  if(randomName == 23)
  {
    lcd.print("Freja");
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
