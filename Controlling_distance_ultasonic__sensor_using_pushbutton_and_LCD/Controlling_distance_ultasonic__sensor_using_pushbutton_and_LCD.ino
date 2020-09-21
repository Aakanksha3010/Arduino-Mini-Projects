#include<LiquidCrystal.h>
int trigpin=2;
int echopin=3;
int buttonpin=A0;
int rs=7;
int enablepin=8;
int db4=9;
int db5=10;
int db6=11;
int db7=12;
int buttonval;
int pingTravelTime;
float pingDistance;
float distanceToTarget;
LiquidCrystal lcd(rs,enablepin,db4,db5,db6,db7);
int dt=3000;
void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(buttonpin,INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Place the target");
  lcd.setCursor(0,1);
  lcd.print("Press to measure");
  buttonval=digitalRead(buttonpin);
  while(buttonval==1){
    buttonval=digitalRead(buttonpin);
  }
  
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  pingTravelTime=pulseIn(echopin,HIGH);
  delay(300);
  pingDistance=(0.013464)*(pingTravelTime);
  distanceToTarget=pingDistance/2.;
  Serial.print("Time:   ");
  Serial.print(pingTravelTime);
  Serial.print("  Distance_Target:  ");
  Serial.println(distanceToTarget);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  lcd.setCursor(0,1);
  lcd.print(distanceToTarget);
  lcd.print("inches");
  delay(dt);
 
 
    
  
  
  
  
  
}
