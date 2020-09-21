# include<LiquidCrystal.h>
int registerselect=7;
int enablepin=8;
int db4=13;
int db5=12;
int db6=11;
int db7=10;
LiquidCrystal lcd(registerselect,enablepin,db4,db5,db6,db7);
void setup()
{
  lcd.begin(16,2);
  
}

void loop()
{
//  Method 1 of printing name on lcd
  lcd.setCursor(0,0);
  lcd.print("Aajinkya is");
  lcd.setCursor(0,1);
  lcd.print("Nigga");
//  
}
