
/*
  Project: Intelligent Embedded Room Monitoring
           and Automation System

  Module: External LED Blinking
  Microcontroller: ESP32 DevKit
  GPIO Pin: 23
*/

const int ledPin = 23;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);

  digitalWrite(ledPin, LOW);
  delay(1000);
}
