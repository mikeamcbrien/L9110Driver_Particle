#include <L9110Driver.h>

L9110_Motor motor (D2, D4);

void setup ( ) {
    // engage the motor's brake
    motor.run (BRAKE);
    motor.setSpeed (255);
    Serial.begin (9600);
}

void loop ( ) {
    motor.run (FORWARD | RELEASE);
    Serial.print ("Forward...");
    delay(1500);

    motor.run (BRAKE | BACKWARD);
    Serial.print ("Braking...");
    delay (1500);

    motor.run (RELEASE);
    Serial.print ("Backwards");
    delay (1500);

    motor.setSpeed (0);
    Serial.print ("Stoping...");
    delay(1500);

    motor.run (BRAKE);
    motor.setSpeed (255);
}
