int temperature()
{   
  //temperature value (not celcius)
  SensorValue = analogRead(A0);
  lcd.setRGB(12, 235, 212);
  return;
}
