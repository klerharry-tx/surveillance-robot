#include <Servo.h>

Servo scannerServo;
Servo turretServo;

const int trigPin = 9;
const int echoPin = 10;
const int laserPin = 8;

long duration;
int distance;

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}

void setup() {
  scannerServo.attach(6);
  turretServo.attach(5);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(laserPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int closestDistance = 999;
  int targetAngle = 90;

  for (int angle = 0; angle <= 180; angle += 5) {

    scannerServo.write(angle);
    delay(100);

    int d = getDistance();

    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print(" Distance: ");
    Serial.println(d);

    if (d > 0 && d < closestDistance && d < 100) {
      closestDistance = d;
      targetAngle = angle;
    }
  }

  if (closestDistance < 100) {

    turretServo.write(targetAngle);

    digitalWrite(laserPin, HIGH);

    Serial.print("Target Found at ");
    Serial.println(targetAngle);

    delay(1000);

  } else {

    digitalWrite(laserPin, LOW);
  }
}