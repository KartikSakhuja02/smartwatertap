const int sensorPin = 2;
const int relayPin = 3;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Relay off by default
}

void loop() {
  int presence = digitalRead(sensorPin);
  if (presence == LOW) {
    digitalWrite(relayPin, HIGH); // Turn ON water
  } else {
    digitalWrite(relayPin, LOW);  // Turn OFF water
  }
}