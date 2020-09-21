int xpin=A0;
int ypin=A1;
int spin=2;
int xval;
int yval;
int dt=250;
int sval;
void setup()
{
  pinMode(xpin,INPUT);
  pinMode(ypin,INPUT);
  pinMode(spin,INPUT);
  digitalWrite(spin,HIGH);
  Serial.begin(9600);
  
}

void loop()
{
  xval=analogRead(xpin);
  yval=analogRead(ypin);
  sval=digitalRad(spin);
  delay(dt);
  Serial.print("X value:  ");
  Serial.print(xval);
  Serial.print("  Y value:  ");
  Serial.print(yval);
  Serial.print("  Switch state:  ");
  Serial.println(sval);
}
