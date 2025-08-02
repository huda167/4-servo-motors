#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

unsigned long startTime;

void setup()
{
  servo1.attach(6);
  servo2.attach(5);
  servo3.attach(4);
  servo4.attach(3);
 
  startTime = millis();
}

void loop()
{
   if (millis() - startTime < 2000) {
    for (int pos = 0; pos <= 180; pos++) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }
    for (int pos = 180; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(15);
    }
  }
  else {
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  }
   }