int speedpin=11;
int ip1=4;
int ip2=2;
int motorspeed=255;
int dt=250;
int tiltpin=9;
int tiltval;

void setup()
{
  pinMode(speedpin,OUTPUT);
  pinMode(ip1,OUTPUT);
  pinMode(ip2,OUTPUT);
  pinMode(tiltpin,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  digitalWrite(ip1,HIGH);
  digitalWrite(ip2,LOW);
  tiltval=digitalRead(tiltpin);
  Serial.println(tiltval);
  if(tiltval==0){
    analogWrite(speedpin,motorspeed);
  }
  if(tiltval==1){
    analogWrite(speedpin,0);
  }
    
  
}
