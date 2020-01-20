#include "servos.h"

void raiseArmTop()
{
    while (analog(DISTANCE_SENSOR_PORT) > 685)
    {
        set_servo_position(SERVO_1_PORT, 1457);
        msleep(100);
        motor(MOTOR_1_PORT, 450);
    }
    motor(MOTOR_1_PORT, 0);
}

void lowerArmBottom()
{
    while (analog(DISTANCE_SENSOR_PORT) > 2000)
    {
        set_servo_position(SERVO_1_PORT, 2000);
        msleep(100);
        motor(MOTOR_1_PORT, -450);
    }
    motor(MOTOR_1_PORT, 0);
}

void openClaw()
{
    set_servo_position(SERVO_2_PORT, 1000);
}

void closeClaw()
{
    set_servo_position(SERVO_2_PORT, 600);
}