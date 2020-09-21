int pinA1=A1;
int waitTime=500;
int photoval;
int pin13=13;
int pin12=12;
void setup()
{
  

  pinMode(pinA1,INPUT);
  pinMode(pin13,OUTPUT);
  pinMode(pin12,OUTPUT);
  Serial.begin(9600);
 
  
}

void loop()
{
photoval=analogRead(pinA1);
Serial.println(photoval);
  if(photoval==929){
    digitalWrite(pin12,HIGH);
    delay(waitTime);
    digitalWrite(pin13,LOW);
    delay(waitTime);
  }
  if(photoval==28){
    digitalWrite(pin13,HIGH);
    delay(waitTime);
    digitalWrite(pin12,LOW);
    delay(waitTime);
  }

}
  
  
  
