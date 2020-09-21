int readpin=A2;
float v2;
float readval;
int waitTime=250;
int pin2=2;
int pin3=3;
int pin4=4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readpin,INPUT);
pinMode(pin2,OUTPUT);  
pinMode(pin3,OUTPUT);  
pinMode(pin4,OUTPUT); 
  
}

void loop() {
  // put your main code here, to run repeatedly:
readval=analogRead(readpin);
v2=(5./1024.)*readval;
Serial.println(v2);
if(v2<3){
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,LOW);
}
if(v2>3 && v2<4){
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);
}  
if(v2>=4){
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,HIGH);
}  
 delay(waitTime);  

}  
