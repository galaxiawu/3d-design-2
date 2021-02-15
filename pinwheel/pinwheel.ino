/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-serial-monitor
 */

 #include <Servo.h>

 Servo myservo;

 int pos=0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // set the digital pin as output:
   myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  if(Serial.available()) // if there is data comming
  {
    String command = Serial.readStringUntil('\n'); // read string until meet newline character
    if(command == "RUN") {
      for (pos = 0; pos < 210; pos++) {
      myservo.write(pos);
      Serial.println("plus");
      }
    } 
    else {
    }
    }
}
