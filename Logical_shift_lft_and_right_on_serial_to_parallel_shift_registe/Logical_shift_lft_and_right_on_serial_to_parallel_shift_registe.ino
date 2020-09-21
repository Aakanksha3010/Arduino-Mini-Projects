int datapin=12;
int clockpin=9;
int latchpin=11;
int dt=250;
byte LEDs=0B10101010;

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
//  FOR LOGICAL SHIFT RIGHT
  LEDs=LEDs/2;
//  FOR LOGICAL SHIFT LEFT 
  LEDs=LEDs*2;
  Serial.println(LEDs,BIN);
