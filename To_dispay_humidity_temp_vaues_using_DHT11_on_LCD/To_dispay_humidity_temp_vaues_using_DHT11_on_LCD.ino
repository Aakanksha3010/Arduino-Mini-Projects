#include <DHT.h>
#include<LiquidCrystal.h>
#define Type DHT11
int sensepin=2;
int setTime=500;
int dt=900;
DHT HT(sensepin,Type);
float humidity;
float tempC;
float tempF;
int rs=7;
int enablepin=8;
int db4=10;
int db5=11;
int db6=12;
int db7=13;
LiquidCrystal lcd(rs,enablepin,db4,db5,db6,db7);
void setup()
{
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
  lcd.begin(16,2);
  

void loop()
{
  humidity=HT.readHumidity();
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);
  
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("TempC: ");
  lcd.print(tempC);
  lcd.setCursor(0,1);
  lcd.print("TempF: ");
  lcd.print(tempF);
  lcd.clear();
  
  
  Serial.print("Humidity:  ");
  Serial.print(humidity);
  Serial.print("  Temperature_C:    ");
  Serial.print(tempC);
  Serial.print("   Temperature_F:    ");
  Serial.println(tempF);
  delay(dt);
}
