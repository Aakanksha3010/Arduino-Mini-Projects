int ledpin=5;
int switchpin=13;
int readpin;
int dt=200;
void setup()
{
  

  pinMode(ledpin,OUTPUT);
  pinMode(switchpin,INPUT);
  Serial.begin(9600);
 
  
}

void loop()
{
readpin=digitalRead(switchpin);
Serial.println(readpin);
delay(dt);  

  if(readpin==0){
    digitalWrite(ledpin,HIGH);
    delay(dt);
  }
  if(readpin==1){
    digitalWrite(ledpin,LOW);
    delay(dt);
  }
  

}
