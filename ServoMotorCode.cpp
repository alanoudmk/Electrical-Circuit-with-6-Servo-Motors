#include <Servo.h>

// Declaring an array of 6 Servo objects
Servo servo1, servo2, servo3, servo4, servo5, servo6;

// Defining the pin numbers for the servo signals
int servoSignal[] = {3, 5, 6, 9, 10, 11}; 



void setup()
{
  // Attaching each servo to its corresponding signal pin
  servo1.attach( servoSignal[0] ); 
  servo2.attach( servoSignal[1] ); 
  servo3.attach( servoSignal[2] ); 
  servo4.attach( servoSignal[3] ); 
  servo5.attach( servoSignal[4] ); 
  servo6.attach( servoSignal[5] ); 
  
  // Initializing the serial communication at 9600 baud rate
  Serial.begin(9600);
}


void loop()
{
  // Setting the delay time between servo movements
  int delay_time = 50;

  
  // Sweeping servos 0-180 degrees in increments of 10 degrees
  for( int i=0 ; i<=180 ; i+= 10){
 	servo1.write(i);
    delay(delay_time);
    servo2.write(i);
    delay(delay_time);
    servo3.write(i);
    delay(delay_time);
    servo4.write(i);
    delay(delay_time);
    servo5.write(i);
    delay(delay_time);
    servo6.write(i);
    delay(delay_time);
  }
  
  // Sweeping servos 180-0 degrees in decrements of 10 degrees
  for( int i=180 ; i>=0 ; i-= 10){
    servo1.write(i);
    delay(delay_time);
    servo2.write(i);
    delay(delay_time);
    servo3.write(i);
    delay(delay_time);
    servo4.write(i);
    delay(delay_time);
    servo5.write(i);
    delay(delay_time);
    servo6.write(i);
    delay(delay_time);
  }

}
