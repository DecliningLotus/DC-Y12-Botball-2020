#include "servos.h"

void openClaw()
{
    set_servo_position(CLAW_PORT, 1400);
}

void closeClaw()
{
    set_servo_position(CLAW_PORT, 850);
}

void raiseArm()
{
    set_servo_position(SWEEPER_ARM_PORT, 1000);
}

void lowerArm()
{
    set_servo_position(SWEEPER_ARM_PORT, 200);
}

void sweep()
{
    set_servo_position(SWEEPER_PORT, 1600);
    msleep(1500);
    set_servo_position(SWEEPER_PORT, 500);
}