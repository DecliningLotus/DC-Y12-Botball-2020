#include "servos.h"

int i;

void unfoldArm()
{
    motor(MOTOR_1_PORT, 50);
    msleep(2000);
    motor(MOTOR_1_PORT, 0);
    for (i = 2200; i >= 360; i -= 20)
    {
        set_servo_position(ARM_PORT, i);
        msleep(10);
    }
    set_servo_position(ARM_PORT, 360);
    motor(MOTOR_1_PORT, 50);
    msleep(800);
    motor(MOTOR_1_PORT, 20);
    msleep(420);
    motor(MOTOR_1_PORT, 0);
}

void raiseArmTop()
{
    int i;
    for (i = 1800, i >= 360, i -= 20)
    {
        set_servo_position(ARM_PORT, i);
        msleep(10);
    }
    set_servo_position(ARM_PORT, 360);
    msleep(100);
    motor(MOTOR_1_PORT, 300);
    motor(MOTOR_1_PORT, 0);
}

void lowerArmBottom()
{
    for (i = 360, i <= 1800, i += 20)
    {
        set_servo_position(ARM_PORT, i);
        msleep(10);
    }
    set_servo_position(ARM_PORT, 1800);
    msleep(100);
    motor(MOTOR_1_PORT, -300);
    msleep(2500);
    motor(MOTOR_1_PORT, 0);
}

void openClaw()
{
    set_servo_position(CLAW_PORT, 1000);
}

void closeClaw()
{
    set_servo_position(CLAW_PORT, 600);
}