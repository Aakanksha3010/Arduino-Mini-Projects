float sinVal;
float cosVal;
float j;
float parabola;
float parabola2;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(j=-4;j<=4;j=j+0.1){
    parabola=j*j;
    parabola2=-(j*j);
    Serial.print(parabola);
    Serial.print(",");
    Serial.println(parabola2);
    
  }
}
