// Projeto 1 - LED piscante
// André L. Marcelino 05/11/2017 Blumenau

int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);

}
