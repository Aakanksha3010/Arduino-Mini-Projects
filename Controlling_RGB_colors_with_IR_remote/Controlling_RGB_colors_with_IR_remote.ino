#include<IRremote.h>
int IRpin=9;
IRrecv IR(IRpin);
decode_results cmd;
int redpin=11;
int bluepin=10;
int greenpin=6;
String myCom;
int rBright=255;
int bBright=255;
int gBright=255;
int waitTime=500;
float dimfact=1;
void setup()
{
  pinMode(redpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  pinMode(greenpin,OUTPUT);
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
  if(myCom=="pwr"){
    rBright=255;
    bBright=255;
    gBright=255;
    dimfact=1;
  }
  if(myCom=="fun"){
    rBright=0;
    bBright=0;
    gBright=0;
    dimfact=0;
  }
  if(myCom=="zero"){
    rBright=255;
    bBright=255;
    gBright=255;
    
  }
  if(myCom=="one"){
    rBright=255;
    bBright=0;
    gBright=0;
    
  }
  if(myCom=="two"){
    rBright=0;
    bBright=255;
    gBright=0;
   
  }
  if(myCom=="three"){
    rBright=0;
    bBright=0;
    gBright=255;
   
  }
  if(myCom=="four"){
    rBright=0;
    bBright=255;
    gBright=255;
    
  }
  if(myCom=="five"){
    rBright=255;
    bBright=255;
    gBright=0;
   
  }
  if(myCom=="six"){
    rBright=255;
    bBright=0;
    gBright=255;
   
  }
  if(myCom=="up"){
    dimfact=dimfact*1.2;
    if(dimfact>255){
      dimfact=1;
    }
  }
  if(myCom=="dn"){
    dimfact=dimfact*0.75;
  }
  
  
  analogWrite(redpin,rBright*dimfact);
  analogWrite(bluepin,bBright*dimfact);
  analogWrite(greenpin,gBright*dimfact);
    
  
  }
   
  
