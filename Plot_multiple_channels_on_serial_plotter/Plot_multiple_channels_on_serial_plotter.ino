float sinVal;
float cosVal;
float j;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(j=0;j<=2*3.14;j=j+0.1){
    sinVal=sin(j);
    cosVal=cos(j);
    Serial.print(sinVal);
    Serial.print(",");
    Serial.println(cosVal);
    
  }
}
