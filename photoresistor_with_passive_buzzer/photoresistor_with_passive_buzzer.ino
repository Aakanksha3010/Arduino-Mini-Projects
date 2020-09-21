int buzzpin=13;
int photopin=A5;
float toneval;
int photoval;
void setup()
{
  

  pinMode(photopin,INPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
 
  
}

void loop()
{
photoval=analogRead(photopin);
toneval=(9./901.)*photoval+(649./901.);  
Serial.println(photoval);
digitalWrite(buzzpin,HIGH);
delay(toneval);
digitalWrite(buzzpin,LOW);
delay(toneval);  

}
