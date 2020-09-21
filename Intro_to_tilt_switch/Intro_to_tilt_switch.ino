int tiltpin=2;
int tiltval;
int redled=9;
int greenled=8;
int dt=250;

void setup(){
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(tiltpin,INPUT);
  digitalWrite(tiltpin,HIGH);
  Serial.begin(9600);
  
}

void loop()
{
  tiltval=digitalRead(tiltpin);
  Serial.println(tiltval);
  if(tiltval==1){
    digitalWrite(redled,HIGH);
    delay(dt);
    digitalWrite(greenled,LOW);
  }
  if(tiltval==0){
    digitalWrite(redled,LOW);
    delay(dt);
    digitalWrite(greenled,HIGH);
  }
} 
