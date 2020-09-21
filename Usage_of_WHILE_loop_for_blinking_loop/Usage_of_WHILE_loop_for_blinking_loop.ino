int pin9=9;
int pin10=10;
int pin10=10;
int pinA5=A5;
int waitTime=500;
int potval;
void setup()
{
  pinMode(pin10,OUTPUT);
  pinMode(pinA5,INPUT);
  Serial.begin(9600);

}

void loop()
{
  potval=analogRead(pinA5);
  Serial.println(potval);
  delay(waitTime);
    while(potval>1000){
    digitalWrite(pin10,HIGH);
    potval=analogRead(pinA5);
    Serial.println(potval);
  }
  digitalWrite(pin10,LOW);
  
} 
