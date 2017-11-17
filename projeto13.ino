// Projeto 13 - Sensor de batida piezo
// André L. Marcelino 17/11/2017 Arapongas

int ledPin = 9;      // LED no pino digital 9
int piezoPin = 5;    // piezo no pino analógico 5
int threshold = 120; // valor do sensor atngido antes da ativação
int sensorValue = 0; // uma variável para armazenar o valor lido do sensor
float ledValue = 0;  // brilho do LED

void setup() {
  pinMode(ledPin, OUTPUT); // define o ledPin como OUTPUT
  // pisca o LED duas vezes para mostrar que o programa iniciou
  digitalWrite(ledPin, HIGH); delay(150); digitalWrite(ledPin, LOW); delay(150);
  digitalWrite(ledPin, HIGH); delay(150); digitalWrite(ledPin, LOW); delay(150);
}

void loop() {
  sensorValue = analogRead(piezoPin);   // lê o valor do sensor

  if(sensorValue >= threshold) {       // se for detectada uma batida, defina o brilho como máximo
    ledValue = 255;
  }

  analogWrite(ledPin, int(ledValue));  //escreve o valor de brilho no LED
  ledValue -= 0.05;                    // apaga o LED lentamente

  if(ledValue <= 0) { ledValue = 0;}   // certifica-se de que o valor não descerá abaixo de zero
}
