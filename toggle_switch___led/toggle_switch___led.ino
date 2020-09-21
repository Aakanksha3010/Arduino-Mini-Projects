int ledpin=5;
int switchpin=13;
int buttonnew;
int buttonold=1;
int ledstate=0;
int dt=200;
void setup(){
  pinMode(ledpin,OUTPUT);
  pinMode(switchpin,INPUT);
  Serial.begin(9600);
 
  
}

void loop()
{
buttonnew=digitalRead(switchpin);
  if(buttonold==1 && buttonnew==0){
    if(ledstate==0){
      digitalWrite(ledpin,HIGH);
      ledstate=1;
    }
    else{
      digitalWrite(ledpin,LOW);
      ledstate=0;
    }
buttonold=buttonnew;
delay(dt);
  
  }  

}
