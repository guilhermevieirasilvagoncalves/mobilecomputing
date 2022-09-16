#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
int segundos = 0;
int atual;
int anterior;
int min = 0, hora = 0, sec = 0;
String hora_s, min_s, sec_s;
void setup()
{
  lcd.begin(16, 2);
  pinMode(3,INPUT_PULLUP);// HORA
  pinMode(2,INPUT_PULLUP);// MINUTO
  attachInterrupt(digitalPinToInterrupt(2),incrementaMin, FALLING);
  attachInterrupt(digitalPinToInterrupt(3),incrementaHora, FALLING);
  
}

void loop()
{
  sec += 1;
  if(sec == 60){
    sec = 0;
    min++;
  }
  if(min == 60){
    min = 0;
    hora++;
  }
  if(hora == 24){
    hora = 0;
  }
  lcd.setCursor(0,0);
  lcd.print("Hora: ");
  hora_s = hora;
  if(hora < 10){
    hora_s = "0"+String(hora);
  }
  min_s = min;
  if(min < 10){
    min_s = "0"+String(min);
  }
  sec_s = sec;
  if(sec < 10){
    sec_s = "0"+String(sec);
  }
  lcd.print(hora_s);
  lcd.print(":");
  lcd.print(min_s);
  lcd.print(":");
  lcd.print(sec_s);
  delay(1000);
  lcd.clear();
  
}

void incrementaMin(){
  atual = millis();
  if(atual - anterior > 200){
    min++;
    if(min == 60){
      min = 0;
      hora++;
    }
    anterior = atual;
   }
}
void incrementaHora(){
  atual = millis();
  if(atual - anterior > 200){
   hora++;
   if(hora == 24){
      hora = 0;
      min = 0;
      sec = 0;
  }
  anterior = atual;
  }
}
