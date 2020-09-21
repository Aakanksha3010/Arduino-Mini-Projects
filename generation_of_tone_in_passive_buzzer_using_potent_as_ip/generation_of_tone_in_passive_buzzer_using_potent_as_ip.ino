int pinA1=A1;
int pin6=6;
int dt1=1;
int dt2=100;
int potval;
float toneval;
void setup()
{
  
  pinMode(pin6,OUTPUT);
  pinMode(pinA1,INPUT);
 
  
}

void loop()
{
potval=analogRead(pinA1);
toneval=(9940./1023.)*potval+60;
digitalWrite(pin6,HIGH);
delayMicroseconds(dt1);
digitalWrite(pin6,LOW);
delayMicroseconds(dt1);

}
  
}
  
