#include<Servo.h>
int servopin=4;
int photopin=A0;
float photoval;
float servopos;
int dt=250;
Servo myservo;

void setup()
{
  myservo.attach(servopin);
  pinMode(photopin,INPUT);
  pinMode(servopin,OUTPUT);
  Serial.begin(9600);
  
  
}

void loop()
{
 photoval=analogRead(photopin);
  Serial.println(photoval);
  delay(dt);
  servopos=(-180./701.)*photoval+(187.2);
  myservo.write(servopos);
  Serial.println(servopos);
  
  
}
  
  
