#include<IRremote.h>
int IRpin=11;
int speedpin=10;
int ip1=4;
int ip2=3;
IRrecv IR(IRpin);
String myCom;
int motorspeed=255;
decode_results cmd;
void setup()
{
  Serial.begin(9600);
  IR.enableIRIn();
  pinMode(ip1,OUTPUT);
  pinMode(ip2,OUTPUT);
  pinMode(speedpin,OUTPUT);
  digitalWrite(ip1,HIGH);
  digitalWrite(ip2,LOW);
  
}

void loop()
{
  while(IR.decode(&cmd)==0){
    
  }
 
  delay(1000);
  IR.resume();
  
  if(cmd.value==0xFD30CF){
  myCom="zero";
  Serial.println(myCom); 
}
if (cmd.value==0xFD08F7){
  myCom="one";
  Serial.println(myCom); 
}
if (cmd.value==0xFD8877){
  myCom="two";
  Serial.println(myCom); 
}
if (cmd.value==0xFD48B7){
  myCom="three";
  Serial.println(myCom); 
}
if (cmd.value==0xFD28D7){
  myCom="four";
  Serial.println(myCom); 
}
if (cmd.value==0xFDA857){
  myCom="five";
  Serial.println(myCom); 
}
if (cmd.value==0xFD6897){
  myCom="six";
  Serial.println(myCom); 
}
if (cmd.value==0xFD18E7){
  myCom="seven";
  Serial.println(myCom); 
}
if (cmd.value==0xFD9867){
  myCom="eight";
  Serial.println(myCom); 
}
if (cmd.value==0xFD58A7){
  myCom="nine";
  Serial.println(myCom); 
}  
 
if (cmd.value==0xFD00FF){
  myCom="pwr";
  Serial.println(myCom); 
}
if (cmd.value==0xFD807F){
  myCom="v+";
  Serial.println(myCom);
}
if (cmd.value==0xFD40BF){
  myCom="fun";
  Serial.println(myCom);
}
if (cmd.value==0xFD20DF){
  myCom="rew";
  Serial.println(myCom);
}
if (cmd.value==0xFDA05F){
  myCom="play";
  Serial.println(myCom);
}
if (cmd.value==0xFD609F){
  myCom="ff";
  Serial.println(myCom);
}
if (cmd.value==0xFD10EF){
  myCom="dn";
  Serial.println(myCom);
}
if (cmd.value==0xFD906F){
  myCom="v-";
  Serial.println(myCom);
}
if (cmd.value==0xFD50AF){
  myCom="up";
  Serial.println(myCom);
}
if (cmd.value==0xFDB04F){
  myCom="eq";
  Serial.println(myCom);
}
if (cmd.value==0xFD708F){
  myCom="st";
  Serial.println(myCom);
}
  
  if ( myCom=="fun"){
  digitalWrite(ip1,LOW);
  digitalWrite(ip2,HIGH);
  analogWrite(speedpin,0);  
}
 if (myCom=="pwr"){
  digitalWrite(ip1,LOW);
  digitalWrite(ip2,HIGH);
  analogWrite(speedpin,255);  
}
  if (myCom=="ff"){
  digitalWrite(ip1,LOW);
  digitalWrite(ip2,HIGH);
  analogWrite(speedpin,motorspeed);  
}
  if (myCom=="rew"){
  digitalWrite(ip1,HIGH);
  digitalWrite(ip2,LOW);
  analogWrite(speedpin,motorspeed);  
}
  if(myCom=="up"){
    motorspeed=motorspeed+15;
    if(motorspeed>255){
      motorspeed=255;
    }
  }
  if(myCom=="dn"){
    motorspeed=motorspeed-15;
    if(motorspeed<0){
      motorspeed=0;
    }
  }
  
  
  
}
