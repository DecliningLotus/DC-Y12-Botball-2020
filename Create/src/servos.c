#include "servos.h"

int i;

void unfoldArm()
{
    motor(MOTOR_1_PORT, -50);
    msleep(4700);
    motor(MOTOR_1_PORT, 0);
    for (i = 1900; i >= 500; i -= 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 500);
}

void raiseArmTop()
{
    motor(MOTOR_1_PORT, -50);
    msleep(4450);
    motor(MOTOR_1_PORT, 0);
    msleep(100);
    for (i = 180; i <= 500; i += 7)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 500);
}

void lowerArmBottom()
{
    for (i = 500; i >= 180; i -= 7)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 180);
    msleep(100);
    motor(MOTOR_1_PORT, 50);
    msleep(4450);
    motor(MOTOR_1_PORT, 0);
}

void lowerClaw()
{
    for (i = 500; i <= 600; i += 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 600);
}

void lowerArmAstro()
{
    for (i = 500; i >= 180; i -= 15)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 180);
    msleep(100);
    motor(MOTOR_1_PORT, 50);
    msleep(4000);
    motor(MOTOR_1_PORT, 0);
}

void raiseArmAstro()
{
    motor(MOTOR_1_PORT, -50);
    msleep(4000);
    motor(MOTOR_1_PORT, 0);
    msleep(100);
    for (i = 180; i <= 500; i += 7)
    {
        set_servo_position(ARM_PORT, i);
        msleep(15);
    }
    set_servo_position(ARM_PORT, 500);
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
