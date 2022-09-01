void setup()
{
  pinMode(8,OUTPUT); // MUITO FRIO
  pinMode(9,OUTPUT); //FRIO
  pinMode(10,OUTPUT); // AGRADAVEL
  pinMode(2,OUTPUT); // QUENTE
  pinMode(3, OUTPUT); // MUITO QUENTE
  pinMode(A0,INPUT); // SENSOR DE LUZ
  pinMode(A2,INPUT); // TERMOSTOR
  Serial.begin(9600);
  
}
// luz = 960

// muito quente = 120
// quente = 100
// agradavel = 80
// frio = 60
// muito frio = 30
void loop()
{
  int luminosidade = analogRead(A0);
  int temperatura = analogRead(A2);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);

  Serial.println(temperatura);
  
  if(luminosidade > 950){
     if(temperatura >= 120){
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
     }
     if(temperatura >= 100){
       digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(2,HIGH);
    }
    if(temperatura >= 80){
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
  
    }
    if(temperatura >= 60 ){
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
    }
    if(temperatura >= 30 ){
      digitalWrite(8,HIGH);
    }
  }  
}
