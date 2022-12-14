/*

*/

int redpin=9;
int bluepin= 11;
int greenpin= 10;

void setup() {
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(redpin, OUTPUT);
}

void loop() {
    analogWrite(redpin,255);
    analogWrite(greenpin,0);
    analogWrite(bluepin,135);
    delay(500);
}
