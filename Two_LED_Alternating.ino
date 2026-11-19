
/*
  Project: Intelligent Embedded Room Monitoring
           and Automation System

  Module: Two LED Alternating Blink
  Microcontroller: ESP32 DevKit

  LED 1: GPIO 23
  LED 2: GPIO 22
  Resistors: 330 Ohms each
*/

const int led1 = 23;
const int led2 = 22;

const int blinkInterval = 500;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {

  // First LED ON, Second LED OFF
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(blinkInterval);

  // First LED OFF, Second LED ON
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(blinkInterval);

}
