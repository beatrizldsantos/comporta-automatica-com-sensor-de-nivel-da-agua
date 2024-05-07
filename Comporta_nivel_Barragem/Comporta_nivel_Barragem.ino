#include <Servo.h>
#include <LiquidCrystal.h>
const int trig = 2, echo = 3;
int z;
int vermelho=A0,laranja=A1,amarelo=A2,verde=A3;
int buzzerp2=7;
int distancia, distanciacm;
Servo myservo;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  lcd.begin(16, 2);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(laranja, OUTPUT);
  digitalWrite(verde, HIGH);
  myservo.attach(4);
}

void loop() {
  
  digitalWrite(trig, HIGH);
  delay(15);
  digitalWrite(trig, LOW);
  distancia = pulseIn(echo, HIGH);
  distanciacm = (distancia / 58.2);
  z=335-distanciacm;
  lcd.setCursor(0, 0);
  lcd.print("Altura : ");
  lcd.print(z);
  delay(1000); 
  
  if (distanciacm > 240) {
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Estado: Seguro  ");
    digitalWrite(vermelho, LOW);
    digitalWrite(laranja, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, HIGH);
    noTone(buzzerp2);
    myservo.write(0);
    delay(20);
    
  }
  if (distanciacm > 160 && distanciacm <= 240 ) {
    lcd.setCursor(0, 1);
    lcd.print("Estado: Espera 1");
    digitalWrite(vermelho, LOW);
    digitalWrite(laranja, LOW);
    digitalWrite(amarelo, HIGH);
    digitalWrite(verde, LOW);
    noTone(buzzerp2);
    myservo.write(30);
    delay(20);
  }
  if (distanciacm > 80 && distanciacm <= 160) { 
    lcd.setCursor(0, 1);
    lcd.print("Estado: Espera 2");
    digitalWrite(vermelho, LOW);
    digitalWrite(laranja,HIGH);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, LOW);
    noTone(buzzerp2);
    myservo.write(60);
    delay(20);
  }
  if (distanciacm > 0 && distanciacm <= 80) {
    lcd.setCursor(0, 1);
    lcd.print("Estado: PERIGO!!");
    digitalWrite(vermelho, HIGH);
    digitalWrite(laranja,LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, LOW);
    buzzer();
    myservo.write(90);
    delay(20);
  }
 
}

void buzzer(){
  tone(buzzerp2,2000,250);
    delay(300);
}
