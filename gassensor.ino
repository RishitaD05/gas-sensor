const int SensorPin = 8;
const int LEDPin = 7;
int Sensor = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SensorPin, INPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int GasSensor = digitalRead(SensorPin);
  if (GasSensor == HIGH) {
    digitalWrite(LEDPin, HIGH);
    Serial.println("GAS DETECTED");
    Serial.println(" ");
    Sensor = !Sensor;
  } else if (GasSensor == LOW) {
    digitalWrite(LEDPin, LOW);
    Serial.println(" NO GAS DETECTED");
    Serial.println(" ");
    Sensor = !Sensor;
  }
}
