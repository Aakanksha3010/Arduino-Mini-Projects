int speedpin=11;
int ip1=7;
int ip2=4;
int dt=500;
int motorspeed=100;

void setup(){
 pinMode(speedpin,OUTPUT);
  pinMode(ip1,OUTPUT);
  pinMode(ip2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(ip1,LOW);
  digitalWrite(ip2,HIGH);
  analogWrite(speedpin,motorspeed);
  
  
  
}
