// Exercício 3-2
// André L. Marcelino 07/11/2017 Blumenau

byte ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

int ledDelay(150);
int direction = 1;
int currentLED = 0;
int kick = 9;
unsigned long changeTime;

void setup() {
  for (int x = 0; x < 10; x++) {
    pinMode(ledPin[x], OUTPUT);
  }

  changeTime = millis();
}

void loop() {
  if ((millis() - changeTime) > ledDelay) {
    changeLED();
    changeTime = millis();
  }
}

void changeLED() {
  for (int x = 0; x < 10; x++) {
    digitalWrite(ledPin[x], LOW);
  }

  digitalWrite(ledPin[currentLED], HIGH);
  currentLED += direction;

  if (currentLED == kick) {
    direction = -1;
  }
  if (currentLED == 0) {
    direction = 1;
    kick--;
    if (kick == 0) {kick = 9;}
  }
}
