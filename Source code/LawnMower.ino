#include <Servo.h>
const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;
const int trigPin = 6;
const int echoPin = 7;
const int servoPin = 5;
Servo scanServo;
const int ledPin = 4; 
const int distanceThreshold = 20; 
void setup() {
pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(ledPin, OUTPUT);
 scanServo.attach(servoPin);
 scanServo.write(90); 
Serial.begin(9600);
}
long getDistance() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 
 long duration = pulseIn(echoPin, HIGH, 30000);
 long distance = duration * 0.034 / 2;
 return distance;
}
void moveForward() {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
}
void moveBackward() {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
}
void turnLeft() {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
}
void turnRight() {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
}
void stopMotors() {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
}
void loop() {
 scanServo.write(90); 
 delay(500);
 int frontDistance = getDistance();
 Serial.print("Front Distance: ");
 Serial.println(frontDistance);
 if (frontDistance < distanceThreshold) {
 digitalWrite(ledPin, HIGH); 
 stopMotors();
 delay(300);
 scanServo.write(0);
 delay(500);
 int leftDistance = getDistance();
 Serial.print("Left Distance: ");
 Serial.println(leftDistance);
 scanServo.write(180);
 delay(500);
 int rightDistance = getDistance();
 Serial.print("Right Distance: ");
 Serial.println(rightDistance);
 scanServo.write(90); 
 delay(500);
 if (leftDistance > rightDistance) {
 turnLeft();
 delay(400);
 } else {
 turnRight();
 delay(400);
 }
 } else {
 digitalWrite(ledPin, LOW); 
 moveForward();
 }
 delay(100);
}