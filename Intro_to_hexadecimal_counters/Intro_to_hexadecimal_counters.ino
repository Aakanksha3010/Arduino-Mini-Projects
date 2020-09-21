// 0 is written in decimal format

byte mybyte=0;  
int dt=1500;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  mybyte++;
  Serial.println(mybyte,HEX);
}

//0 is written in hexa format
byte mybyte=0x0;
int dt=1500;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  mybyte++;
  Serial.println(mybyte,HEX);
}

//0 is written in binary format
byte mybyte=B00000000;
int dt=1500;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  mybyte++;
  Serial.println(mybyte,HEX);
}



//All convertions of counter
byte mybyte=0x0;
int dt=800;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  mybyte++;
  Serial.print(mybyte,DEC);
  Serial.print("      ");  
  Serial.print(mybyte,BIN);
  Serial.print("       ");
  Serial.println(mybyte,HEX);
  delay(dt);
}
