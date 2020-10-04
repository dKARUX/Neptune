int usingPin13 = 13;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(usingPin13, HIGH);
    delay(1000);
    digitalWrite(usingPin13, LOW);
    delay(1000);
}