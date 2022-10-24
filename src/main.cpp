#include <Arduino.h>

bool led_state = true;

void blink() {
  led_state = !led_state;
  digitalWrite(LED_BUILTIN, led_state);
  Serial.printf("Turn %s led.\n", led_state ? "on" : "off");
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blink();
  sleep(1);
}
