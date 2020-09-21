#include<IRremote.h>
int IRpin=9;
String myCom;
IRrecv IR(IRpin);
decode_results cmd;
void setup()
{
 Serial.begin(9600);
 IR.enableIRIn(); 
}

void loop()
{
  while(IR.decode(&cmd)==0){
    
  }
  
  delay(1500);
  
  
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
  
}
