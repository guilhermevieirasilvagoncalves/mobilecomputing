// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

void setup()
{
  pinMode(2,INPUT);
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);

}


// 10 vermelho pedestre
// 7 verde pedestre
// 4 amarelo carro
// 13 vermelho carro
// 5 verde carro
void loop()
{
 digitalWrite(10,HIGH);
 digitalWrite(5,HIGH);
 int btt = digitalRead(2);
 if(btt == HIGH){
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(2000);    
    digitalWrite(4,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(7,HIGH);
    delay(4000);
    digitalWrite(7,LOW);
    digitalWrite(10,HIGH);

    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);

    digitalWrite(10,LOW);
    digitalWrite(7,LOW);
    digitalWrite(4,LOW);
    digitalWrite(13,LOW);
    digitalWrite(5,LOW);
    
//    digitalWrite(13,HIGH);
//    digitalWrite(10,HIGH);
//    delay(4000);
 }
}
