int greenLED=8;
float pi=3.14;
int dit=200;
int dah=1000;
int longW=1000;
int yellowLED=10;
int whiteLED=3;

void setup() {
  pinMode(yellowLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(whiteLED, HIGH);
  delay(dah);
  digitalWrite(yellowLED, LOW);
  digitalWrite(whiteLED, LOW);
  delay(dah);
}

void loop() {

  digitalWrite(yellowLED, HIGH);
  delay(dit);
  digitalWrite(yellowLED, LOW);
  delay(dit);

  digitalWrite(whiteLED, HIGH);
  delay(dit);
  digitalWrite(whiteLED, LOW);
  delay(dit);
}
