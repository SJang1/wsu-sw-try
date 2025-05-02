int green = 11;
int yellow = 9;
int red = 8;

void setup() {
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
}

void loop() {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(1000);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    delay(1000);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(1000);
}
