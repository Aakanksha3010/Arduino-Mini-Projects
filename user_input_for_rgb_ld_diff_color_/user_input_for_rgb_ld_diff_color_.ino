int pin6=6;
int pin7=7;
int pin8=8;
int waitTime=500;
String LED;
String msg="Hello,which LED would you like to blink:  ";
String msg2="Great you're choosen LED is blinking";


void setup() {
  // put your setup code here, to run once:
pinMode(pin6,OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(pin8,OUTPUT);
Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
  while(Serial.available()==0){
  
  }
LED=Serial.readString();
Serial.println(msg2);
Serial.print(LED); 
  if(LED=="Red" || "RED" || "red"){
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,LOW);
  delay(waitTime);
}
  if(LED=="Blue" || "blue" || "BLUE"){
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH);
  digitalWrite(pin8,LOW);
  delay(waitTime);
  }
  if(LED=="Green" || "GREEN" || "green"){
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,HIGH);
  delay(waitTime);
  }
  if(LED=="yellow"){
  analogWrite(pin6,200);
  analogWrite(pin7,0);
  analogWrite(pin8,150);
  delay(waitTime); 
   }  
  if(LED=="magenta"){
  analogWrite(pin6,200);
  analogWrite(pin7,150);
  analogWrite(pin8,0);
  delay(waitTime); 
  } 
  if(LED=="cyan"){
  analogWrite(pin6,0);
  analogWrite(pin7,200);
  analogWrite(pin8,150);
  delay(waitTime); 
  }
  
   if(LED=="off"){
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,LOW);
  delay(waitTime); 
   }  
    
}
  
