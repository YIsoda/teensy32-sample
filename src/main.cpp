#include <Arduino.h>

// the setup routine runs once when you press reset:
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 2; j++) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(i);
      digitalWrite(LED_BUILTIN, LOW);
      delay(20 - i);
    }
  }

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 2; j++) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(20 - i);
      digitalWrite(LED_BUILTIN, LOW);
      delay(i);
    }
  }
}
