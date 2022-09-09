
void setup()
{
  pinMode(A5,INPUT); // POTENCIOMETRO
  pinMode(5,OUTPUT); // TRANSISTOR
  Serial.begin(9600);
}

void loop()
{
  int pot = analogRead(A5);
  int velo = map(pot,0,1023,0,255);
  analogWrite(5,velo);
  Serial.println(velo);
}
