const int ledPin = 0;
//0:ConnectorA 4:ConnectorB 10:Builtin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); //ON
  delay(500); //0.5msec
  digitalWrite(ledPin, LOW); //OFF
  delay(500); //0.5msec
}
