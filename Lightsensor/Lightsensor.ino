/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int light;    // variable to read the value from the analog pin
int angle;  

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  light = analogRead(potpin);// reads the value of the potentiometer (value between 0 and 1023)
  angle = map(light, 300, 0, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(angle); // sets the servo position according to the scaled value
  Serial.print(light);
  Serial.print(',');
  Serial.println(angle);
  delay(30);                           // waits for the servo to get there
}
