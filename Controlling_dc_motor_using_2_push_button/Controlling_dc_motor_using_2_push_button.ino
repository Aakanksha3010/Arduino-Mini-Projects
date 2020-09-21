int ip1=7;
int ip2=4;
int speedpin=11;
int motorspeed=0;
int spin1=13;
int spin2=12;
int sval1;
int sval2;
int dt=250;
void setup()
{
  pinMode(ip1,OUTPUT);
  pinMode(ip2,OUTPUT);
  pinMode(speedpin,OUTPUT);
  pinMode(spin1,INPUT);
  pinMode(spin2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sval1=digitalRead(spin1);
  sval2=digitalRead(spin2);
  
  Serial.print("Motor speed   ");
  Serial.println(motorspeed);
  
  if (sval1==0){
  motorspeed=motorspeed-10;
  delay(dt);
  }
  if(sval2==0){
    motorspeed = motorspeed+10;
    delay(dt);
  }
  if(motorspeed>255){
    motorspeed=255;
  }
  if(motorspeed<-255){
    motorspeed=-255;
  }
  
  if(motorspeed==10){
    motorspeed=100;
  }
  if(motorspeed==-10){
    motorspeed=-100;
  }
  if(motorspeed==90 || motorspeed==95){
    motorspeed=0;
  }
  if(motorspeed==-90 || motorspeed==-95){
    motorspeed=0;
  }
  if(motorspeed==0){
    analogWrite(speedpin,0);
  }
  if(motorspeed>0){
    analogWrite(speedpin,motorspeed);
    digitalWrite(ip1,LOW);
    digitalWrite(ip2,HIGH);
  }
  if(motorspeed<0){
    analogWrite(speedpin,abs(motorspeed));
    digitalWrite(ip1,HIGH);
    digitalWrite(ip2,LOW);
  }
  
  
  
  
}
