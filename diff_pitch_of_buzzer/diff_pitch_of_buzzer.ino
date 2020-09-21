
int pin6=6;
int j;
int dt1=1;
int dt2=2;
void setup()
{
  
  pinMode(pin6,OUTPUT);
 
  
}

void loop()
{

  for(j=1;j<=100;j++){
    digitalWrite(pin6,HIGH);
    delay(dt1);
    digitalWrite(pin6,LOW);
    delay(dt2);
  }
  
   for(j=1;j<=100;j++){
    digitalWrite(pin6,HIGH);
    delay(dt2);
    digitalWrite(pin6,LOW);
    delay(dt1);
  }
    
  
  
}
  
