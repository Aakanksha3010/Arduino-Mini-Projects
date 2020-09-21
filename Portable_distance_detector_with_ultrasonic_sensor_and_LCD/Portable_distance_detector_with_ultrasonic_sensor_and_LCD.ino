#include<LiquidCrystal.h>
int rs=7;
int enablepin=8;
int db4=10;
int db5=11;
int db6=12;
int db7=13;
LiquidCrystal lcd(rs,enablepin,db4,db5,db6,db7);
int trigpin=2;
int echopin=3;
int pingTravelTime;
float pingDistance;
float distanceToTarget;
int dt=3000;
void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  
  
}

void loop()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  pingTravelTime=pulseIn(echopin,HIGH);
  delay(300);
  pingDistance=(0.013464)*(pingTravelTime);
  distanceToTarget=pingDistance/2.;
  Serial.print("Travel_Time:  ");
  Serial.print(pingTravelTime);
  Serial.print("  DistanceToTarget:  ");
  Serial.println(distanceToTarget);
  
  lcd.setCursor(0,0);
  lcd.print("Dist_to_target: ");
  lcd.setCursor(0,1);
  lcd.print(distanceToTarget);
  lcd.print("inches");
  delay(dt);
  lcd.clear();
  
                  
  
}
