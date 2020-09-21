int speedpin=11;
int ip1=4;
int ip2=2;
int motorspeed;
int dt=250;
int VRYpin=A1;
int VRYval;
void setup()
{
  pinMode(speedpin,OUTPUT);
  pinMode(ip1,OUTPUT);
  pinMode(ip2,OUTPUT);
  pinMode(VRYpin,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
VRYval=digitalRead(VRYpin);
Serial.println(VRYval);
  if(VRYval>=512){
    digitalWrite(ip1,HIGH);
    digitalWrite(ip2,LOW);
    motorspeed=(255./512.)*VRYval+(255.);
    analogRead(speedpin,motorspeed);
   
  }
    if(VRYval<512){
    digitalWrite(ip1,LOW);
    digitalWrite(ip2,HIGH);
    motorspeed=(-255./512.)*VRYval+(255.);
    analogRead(speedpin,motorspeed);  
  }
  if(VRYval==512){
    analogRead(speedpin,0);
  }
  
    
    
  
}
