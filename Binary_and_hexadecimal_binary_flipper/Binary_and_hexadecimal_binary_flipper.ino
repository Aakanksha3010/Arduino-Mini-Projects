int datapin=12;
int clockpin=9;
int latchpin=11;
int dt=250;
int LEDflip;
byte LEDs=0B010101010;

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
  shiftOut(datapin,clockpin,LSBFIRST,LEDflip);
  digitalWrite(latchpin,HIGH);
  delay(dt);
  LEDflip=0xff-LEDs;
  Serial.println(LEDflip,BIN);

}
