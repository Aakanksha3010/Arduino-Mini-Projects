int pinA1=A1;
int pin6=6;
int potval;
int dt=500;
void setup()
{
  pinMode(pinA1,INPUT);
  pinMode(pin6,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  potval=analogRead(A1);
  Serial.println(potval);
  if(potval>1000){
    digitalWrite(pin6,HIGH);
    delay(dt);
    digitalWrite(pin6,LOW);
  }
    
  
  
}
  
