# include<Servo.h>
int Xspin=9;
int Yspin=10;
int vrxpin=A0;
int vrypin=A1;
int spin=2;
int dt=250;
int buzzpin=7;
int Xval;
int Yval;
int Sval;
int servoposX;
int servoposY;
Servo servoX;
Servo servoY;

void setup()
{
  pinMode(Xspin,OUTPUT);
  pinMode(Yspin,OUTPUT);
  pinMode(vrxpin,INPUT);
  pinMode(vrypin,INPUT);
  pinMode(spin,INPUT);
  digitalWrite(spin,HIGH);
  pinMode(buzzpin,OUTPUT);
  servoX.attach(Xspin);
  servoY.attach(Yspin);
  Serial.begin(9600);
  
}

void loop()
{
  Xval=analogRead(vrxpin);
  servoposX=(180./1023.)*Xval;
  Yval=analogRead(vrypin);
  servoposY=(180./1023.)*Yval;
  Sval=digitalRead(spin);
  delay(dt);
  servoX.write(servoposX);
  servoY.write(servoposY);
  if(Sval==0){
    digitalWrite(buzzpin,HIGH);
  }
  else{
    digitalWrite(buzzpin,LOW);
  }
  Serial.print("Xval:  ");
  Serail.print(Xval);
  Serial.print(" Yval:  ");
  Serial.print(Yval);
  Serial.print("  Switch value:  ");
  Serial.println(Sval);
}
