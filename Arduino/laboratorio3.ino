int buzzer = 12;
int check;
int seq[24] = {
  0, 1, 2, 3, 3, 3,
  0, 1, 0, 1, 1, 1,
  0, 4, 3, 2, 2, 2,
  0, 1, 2, 3, 3, 3};

int i = 0;
void setup()
{
  pinMode(13, INPUT_PULLUP); //DO
  pinMode(6, INPUT_PULLUP); // RE
  pinMode(5, INPUT_PULLUP); // MI
  pinMode(4, INPUT_PULLUP); // FA
  pinMode(3, INPUT_PULLUP); //SOL

  pinMode(12,OUTPUT); //BUZZER

  pinMode(9,OUTPUT);// LAMPADA

  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(13) == LOW){
      tone(buzzer,262);
      delay(500);
      noTone(buzzer);
      check = 0;
      if(check == seq[i]){
        i++;
      } else {
        i = 0;
      }
  }
  if(digitalRead(6) == LOW){
      tone(buzzer,294);
      delay(500);
      noTone(buzzer);
      check = 1;
      if(check == seq[i]){
        i++;
      }  else {
        i = 0;
      }
  }
  if(digitalRead(5) == LOW){
      tone(buzzer,330);
      delay(500);
      noTone(buzzer);
      check = 2;
      if(check == seq[i]){
        i++;
      }  else {
        i = 0;
      }
  }
  if(digitalRead(4) == LOW){
      tone(buzzer,349);
      delay(500);
      noTone(buzzer);
      check = 3;
      if(check == seq[i]){
        i++;
      }  else {
        i = 0;
      }
  }
  if(digitalRead(3) == LOW){
      tone(buzzer,392);
      delay(500);
      noTone(buzzer);
      check = 4;
      if(check == seq[i]){
        i++;
      }  else {
        i = 0;
      }
  }
  Serial.print(check);
  Serial.print(" ");
  Serial.println(i);
  if(i == 24){
    digitalWrite(9,HIGH);
    delay(3000);
    digitalWrite(9,LOW);
  }
}
