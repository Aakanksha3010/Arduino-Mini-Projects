int datapin=12;
int clockpin=9;
int latchpin=11;
int dt=250;
byte LED1s=0B10101010;
byte LED2s=0B01010101;
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
  shiftOut(datapin,clockpin,LSBFIRST,LED1s);
  digitalWrite(latchpin,HIGH);
  delay(dt);
  
  digitalWrite(latchpin,LOW);
  shiftOut(datapin,clockpin,LSBFIRST,LED2s);
  digitalWrite(latchpin,HIGH);
  delay(dt);

}
