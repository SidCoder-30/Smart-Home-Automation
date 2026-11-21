
const int PIR_PIN = 27;
const int LED_PIN = 23;

unsigned long lastMotionTime = 0;

const unsigned long LED_DELAY = 5000;

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  Serial.println("PIR Motion Sensor Ready!");
}

void loop() {

  int motionState = digitalRead(PIR_PIN);

  if (motionState == HIGH) {

    digitalWrite(LED_PIN, HIGH);

    lastMotionTime = millis();

    Serial.println("Motion Detected! LED ON");

  }

  else {

    if (millis() - lastMotionTime >= LED_DELAY) {

      digitalWrite(LED_PIN, LOW);

    }

  }
}
