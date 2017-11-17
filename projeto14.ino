// Projeto 14 - Sensor de luz
// André L. Marcelino 17/11/2017 Arapongas

int piezoPin = 8; // piezo no pino 8
int ldrPin = 0;   // LDR no pino analógico 0
int ldrValue = 0; // valor lido no LDR 

void setup() {
  // nada a ser feito aqui
}

void loop() {
  ldrValue = analogRead(ldrPin); // lê o valor do LDR
  tone(piezoPin, 1000);          // toca um tom de 1000Hz no piezo
  delay(25);                     // espera um pouco
  noTone(piezoPin);              // interrompe o tom
  delay(ldrValue);               // espera a quantidade de milissegundos em ldrValue
}
