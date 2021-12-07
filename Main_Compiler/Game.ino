int countGame = 0; //så vi kan vide hvilket stadie spillet er i

bool buttonPressed; //jeppe logik
bool buttonBefore = false; //jeppe logik

int knap = 6; //værdi til knap på selve bord

int t; //random værdi til hvornår tekst vises
int ran;  //random værdi til hvilken tekst vises

char tekst[][17] = {"haha so bad lmao","chubby fingers", "its not ur fault","get gud", "kinda sad ngl", "*yawns*", "dont even try", "just stop", "HA HA HA", "u kinda dogwater"};

void ClickingGame()
{  
  pinMode(knap, INPUT);
  buttonPressed = digitalRead(knap);
  int showCount = countGame - 3; //den værdi som vi viser til spilleren ; har ingen rigtig relevans for funktionen af koden

  if(buttonPressed && buttonBefore == false)
  {
    countGame += 1; //antal af clicks går op med en gang hvis man clicker en gang
    lcd.clear(); //fjern gamle text/score 
    
    t = random(0,20); //random værdi til hvornår tekst vises
    ran = random(0,10); //random værdi til hvilken tekst vises
  }
   buttonBefore = buttonPressed;

//start skærm
   if(countGame == 0)
   {
    lcd.setCursor(0,0);
    lcd.print("Copy Clicker");

    lcd.setCursor(0,1);
    lcd.print("Click to start");
    
   }

//spiller clicker -> start tekst
     if(countGame == 1)
   {
    lcd.setCursor(0,0);
    lcd.print("Your attention");
    lcd.setCursor(0,1);
    lcd.print("spans kinda wack");
    }

     if(countGame == 2)
   {
    lcd.setCursor(0,0);
    lcd.print("You're probably not");
    lcd.setCursor(0,1);
    lcd.print("bad at focusing");
    }

    if(countGame == 3)
   {
    lcd.setCursor(0,0);
    lcd.print("How many times");
    lcd.setCursor(0,1);
    lcd.print("can you click?");
    }

//vis score gennem hele spillet
    if(countGame > 3)
    {
      lcd.setCursor(0,0);
      lcd.print(showCount);
    }

//beslut hvilken og hvornår kommentar i array vises
    if(buttonPressed && countGame > 3 && t > 15)
    {
      lcd.setCursor(0,1);
      lcd.print(tekst[ran]); //vis kommentar
    }
    else if(buttonPressed && countGame > 3 && t < 15)
    {
      lcd.setCursor(0,1);
      lcd.print("                   "); //vis ikke
    }
    

      




    

   




    

    
    

    

    
}
