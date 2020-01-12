#include "servos.h"

void openClaw()
{
    set_servo_position(SERVO_1_PORT, <value>);
}

void closeClaw()
{
    set_servo_position(SERVO_1_PORT, <value>);
}

void raiseArm()
{
    set_servo_position(SERVO_2_PORT, <value>);
}

void lowerArm()
{
    set_servo_position(SERVO_2_PORT, <value>);
}

void sweep()
{
    set_servo_position(SERVO_3_PORT, <value>);
}