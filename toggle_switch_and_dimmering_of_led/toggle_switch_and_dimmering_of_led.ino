int buttpin1=12;
int buttpin2=11;
int buttonval1;
int buttonval2;
int ledpin=3;
int buzzpin=2;
int ledbright=0;
int dt=500;
void setup()
{
  pinMode(buttpin1, INPUT);
  pinMode(buttpin2, INPUT);
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(buzzpin,OUTPUT);
  
}

void loop()
{
  buttonval1=digitalRead(buttpin1);
  buttonval2=digitalRead(buttpin2);
  Serial.print("Butonval1: ");
  Serial.print(buttonval1);
  Serial.print(",");
  Serial.print("Buttonval2: ");
  Serial.println(buttonval2);
  delay(dt);
  if(buttonval1==0){
    ledbright=ledbright+5;
  }
  
  if(buttonval2==0){
    ledbright=ledbright-5;
  }
    if(ledbright>255){
      ledbright=255;
      digitalWrite(buzzpin,HIGH);
    }
    if(ledbright<0){
      ledbright=0;
      digitalWrite(buzzpin,LOW);
    }
    

}  
