// Projeto 9 - Efeito de fogo com LEDs
// André L. Marcelino 10/11/2017 Blumenau

int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  analogWrite(ledPin1, random(120)+136);
  analogWrite(ledPin2, random(120)+136);
  analogWrite(ledPin3, random(120)+136);
  delay(random(100));
}
