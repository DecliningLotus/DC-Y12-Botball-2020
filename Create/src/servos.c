#include "servos.h"

int i;

void unfoldArm()
{
    motor(MOTOR_1_PORT, -50);
    msleep(4000);
    motor(MOTOR_1_PORT, 0);
    for (i = 1900; i >= 325; i -= 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    motor(MOTOR_1_PORT, -50);
    msleep(1500);
    motor(MOTOR_1_PORT, 0);
}

void raiseArmTop()
{
    for (i = 1800; i >= 325; i -= 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 360);
    msleep(100);
    motor(MOTOR_1_PORT, 300);
    motor(MOTOR_1_PORT, 0);
}

void lowerArmBottom()
{
    for (i = 360; i <= 700; i += 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 700);
    msleep(100);
    motor(MOTOR_1_PORT, -50);
    msleep(1000);
    motor(MOTOR_1_PORT, 0);
}

void openClaw(time)
{
    motor(CLAW_PORT, -50);
    msleep(time);
    motor(CLAW_PORT, 0);
}

void closeClaw(time)
{
    motor(CLAW_PORT, 50);
    msleep(time);
    motor(CLAW_PORT, 0);
}