const int analogInPin = A0;
const int leftLed = 2;
const int rightLed = 3;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // LEDs
  pinMode(leftLed, OUTPUT);
  pinMode(rightLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  sensorValue = analogRead(analogInPin);
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);

  if (sensorValue < 1000) {
    // turn on LEDs
    digitalWrite(leftLed, HIGH);
    digitalWrite(rightLed, HIGH);
//    delay(3000);
  } else {
    // turn off LEDs
    digitalWrite(leftLed, LOW);
    digitalWrite(rightLed, LOW);
  }
}
