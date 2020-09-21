# include<LiquidCrystal.h>
int registerselect=7;
int enablepin=8;
int db4=13;
int db5=12;
int db6=11;
int db7=10;
float num1;
float num2;
float ans;
String operater;
LiquidCrystal lcd(registerselect,enablepin,db4,db5,db6,db7);
void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Enter your num1");
  while(Serial.available()==0){
  
  }
  num1=Serial.parseFloat();
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Enter your num2");
  while(Serial.available()==0){
  
  }
  num2=Serial.parseFloat();
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Operator(+,-,*,/)");
  while(Serial.available()==0){
  }
  operater=Serial.readString();
  
  if(operater=="+"){
    ans=num1+num2;
  }
  if(operater=="-"){
    ans=num1-num2;
  }
  if(operater=="*"){
    ans=num1*num2;
  }
  if(operater=="/"){
    ans=num1/num2;
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(num1);
  lcd.print(operater);
  lcd.print(num2);
  lcd.print("=");
  lcd.print(ans);
  lcd.setCursor(0,1);
  lcd.print("Thank you");
  delay(1000);
  lcd.clear();
  
  
}
