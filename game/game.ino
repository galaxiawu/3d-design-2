/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-serial-monitor
 */

 #include <Servo.h>

 Servo myservo;
 

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // set the digital pin as output:
   myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  digitalWrite(2, LOW); //first led
  digitalWrite(5, LOW); //second led
  digitalWrite(11, LOW); //third led
  digitalWrite(13, LOW); //fourth led

  myservo.write(0);
}

void loop() {
  if(Serial.available())
  {
    String command = Serial.readStringUntil('\n'); // read string until meet newline character

    if(command == "SPIN") {
    int spin = random(10, 210);
    
    myservo.write(spin); // write new pos
    delay(5);

 
    Serial.println(spin);
    Serial.println("Spin!");

          if (spin > 9 && spin < 50) {
            digitalWrite(2, HIGH); 
            digitalWrite(13, LOW); //first led
            digitalWrite(5, LOW); //second led
            digitalWrite(11, LOW); //third led
      } else if (spin > 50 && spin < 100) {
            digitalWrite(5, HIGH); 
            digitalWrite(2, LOW); //first led
            digitalWrite(13, LOW); //second led
            digitalWrite(11, LOW); //third led
      } else if (spin > 100 && spin < 155) {
            digitalWrite(11, HIGH); 
            digitalWrite(2, LOW); //first led
            digitalWrite(5, LOW); //second led
            digitalWrite(13, LOW); //third led
      } else if (spin > 155 && spin < 211) {
            digitalWrite(13, HIGH); 
            digitalWrite(2, LOW); //first led
            digitalWrite(5, LOW); //second led
            digitalWrite(11, LOW); //third led
     
      } 
    }
    
    else {
      myservo.write(0); // write new pos
      
      Serial.println("Reset!");
      
      digitalWrite(2, LOW); //first led
      digitalWrite(5, LOW); //second led
      digitalWrite(11, LOW); //third led
      digitalWrite(13, LOW); //fourth led
    }
      
    }
}
