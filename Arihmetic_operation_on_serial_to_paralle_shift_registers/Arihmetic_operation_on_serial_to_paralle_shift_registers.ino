int datapin=12;
int clockpin=9;
int latchpin=11;
int dt=500;
byte LEDs=0x00;

void setup()
{
  Serial.begin(9600);
  pinMode(datapin,OUTPUT);
  pinMode(clockpin,OUTPUT);
  pinMode(latchpin,OUTPUT);
  
  
}

void loop()
{
  digitalWrite(latchpin,LOW);
  shiftOut(datapin,clockpin,LSBFIRST,LEDs);
  digitalWrite(latchpin,HIGH);
  delay(dt);
  Serial.println(LEDs,BIN);
  LEDs++;
  
  
 

}
