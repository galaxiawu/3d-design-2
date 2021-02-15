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
  if(Serial.available()) // if there is data coming
  {
    String command = Serial.readStringUntil('\n'); // read string until meet newline character

    if(command == "BIG") {
    pos = pos + 100; //add 100 to pos
    myservo.write(pos); // write new pos
    delay(5);
    
    Serial.println(pos);
     
    } 
    else 
    if(command == "MED") {
    pos = pos + 50;
    myservo.write(pos); // write new pos
    delay(5);
    
    Serial.println(pos);
      
    }  else 
    if(command == "SMALL") {
    pos = pos + 10;
    myservo.write(pos); // write new pos
    delay(5);
    
    Serial.println(pos);
    }
    
    else
    if(command == "RESET")
    {
     pos = 0;
     myservo.write(pos); //back ot pos 0
     delay(5); 
     
     Serial.println("Reset"); // send action to Serial Monitor
     Serial.println(pos); //debug
     
    }
  }
}
