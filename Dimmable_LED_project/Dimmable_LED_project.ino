int readpin=A2;
int readpin=A5;
float LEDval;
float Potentval;
int pin5=5;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readpin,INPUT);
pinMode(pin5,OUTPUT);  
 
  
}

void loop() {
  // put your main code here, to run repeatedly:
Potentval=analogRead(readpin);
LEDval=(255./1023.)*Potentval;
analogWrite(pin5,LEDval);  
Serial.println(LEDval);

 
}  
