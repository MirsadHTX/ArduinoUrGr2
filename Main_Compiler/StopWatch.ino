int StopWatch()
{
  lcd.setCursor(0,0);
  
  sek += 1;
  delay(1000); // 1000 millisekunder = 1 sekund

  if(sek > 60)
  {
    minut += 1; // øg minut med 1 hvis der er gået over 59 sek
    sek = 0;
    lcd.clear();
  }



  lcd.print(minut);
  lcd.print(":");
  lcd.print(sek);
  return;
}
