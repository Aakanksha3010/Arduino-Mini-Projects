int pin8=8;
int pin9=9;
int pin10=10;
int waitTime=500;
String LED;
String msg="Hello,which LED would you like to blink:  ";
String msg2="Great you're choosen LED is blinking";


void setup() {
  // put your setup code here, to run once:
pinMode(pin8,OUTPUT);
pinMode(pin9,OUTPUT);
pinMode(pin10,OUTPUT);
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
  digitalWrite(pin8,HIGH);
  digitalWrite(pin9,LOW);
  digitalWrite(pin10,LOW);
  delay(waitTime);
}
  if(LED=="Blue" || "blue" || "BLUE"){
  digitalWrite(pin8,LOW);
  digitalWrite(pin9,HIGH);
  digitalWrite(pin10,LOW);
  delay(waitTime);
  }
  if(LED=="Green" || "GREEN" || "green"){
  digitalWrite(pin8,LOW);
  digitalWrite(pin9,LOW);
  digitalWrite(pin10,HIGH);
  delay(waitTime);
  }
   
    
}
