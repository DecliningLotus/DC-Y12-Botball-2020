#include "servos.h"

int i;

void unfoldArm()
{
    motor(MOTOR_1_PORT, -100);
    msleep(2225);
    motor(MOTOR_1_PORT, 0);
    for (i = 1900; i >= 600; i -= 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 600);
}

void raiseArmTop(int start, int end)
{
    motor(MOTOR_1_PORT, -50);
    msleep(4400);
    motor(MOTOR_1_PORT, 0);
    msleep(100);
    for (i = start; i <= end; i += 7)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, end);
}

void lowerArmBottom(int start, int end)
{
    for (i = start; i >= end; i -= 7)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, end);
    msleep(100);
    motor(MOTOR_1_PORT, 50);
    msleep(4400);
    motor(MOTOR_1_PORT, 0);
}

void lowerArmAstro()
{
    for (i = 600; i >= 190; i -= 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 190);
    msleep(100);
    motor(MOTOR_1_PORT, 50);
    msleep(3850);
    motor(MOTOR_1_PORT, 0);
}

void raiseArmAstro()
{
    motor(MOTOR_1_PORT, -50);
    msleep(3850);
    motor(MOTOR_1_PORT, 0);
    msleep(100);
    for (i = 190; i <= 600; i += 7)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 600);
}

void openClaw(int start, int end)
{
    for (i = start; i <= end; i += 30)
    {
        set_servo_position(CLAW_PORT, i);
        msleep(15);
    }
    set_servo_position(CLAW_PORT, end);
}

void closeClaw(int start, int end)
{
    for (i = start; i <= end; i += 30)
    {
        set_servo_position(CLAW_PORT, i);
        msleep(15);
    }
    set_servo_position(CLAW_PORT, end);
}
