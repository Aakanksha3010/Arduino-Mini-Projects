int pinA2=A2;
int waitTime=500;
int photoval;
void setup()
{
  

  pinMode(pinA2,INPUT);
  Serial.begin(9600);
 
  
}

void loop()
{
photoval=analogRead(pinA2);
Serial.println(photoval);
delay(waitTime);  

}
  
  
  
