# include<LiquidCrystal.h>
int registerselect=7;
int enablepin=8;
int db4=13;
int db5=12;
int db6=11;
int db7=10;
float r;
float pi=3.14;
float area;
String op;

LiquidCrystal lcd(registerselect,enablepin,db4,db5,db6,db7);
void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Enter radius");
  while(Serial.available()==0){
  
  }
  r=Serial.parseFloat();
  lcd.clear();
  
  
  
  lcd.setCursor(0,0);
  lcd.print("Press *");
  while(Serial.available()==0){
    
  }
  op=Serial.readString();
  lcd.clear();
 
  
  lcd.setCursor(0,0);
  lcd.print(pi);
  lcd.print(op);
  lcd.print(r);
  lcd.print(op);
  lcd.print(r);
  lcd.print("=");
  lcd.print(area);
  lcd.setCursor(0,1);
  lcd.print("Thank you");
  delay(1000);
  lcd.clear();
  
  
}
