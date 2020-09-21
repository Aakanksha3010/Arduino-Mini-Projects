int pin9=9;
int pin10=10;
int waitTimeR=1000;
int waitTimeY=1000;
int Yellowblink=3;
int Redblink=5;
int j;
void setup()
{
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(j=1;j<=Yellowblink;j++){
    digitalWrite(pin9,HIGH);
    delay(waitTimeY);
    digitalWrite(pin10,LOW);
    delay(waitTimeY);
  }
  
  for(j=1;j<=Redblink;j++){
    digitalWrite(pin9,LOW);
    delay(waitTimeR);
    digitalWrite(pin10,HIGH);
    delay(waitTimeR);
  }
  
} 
