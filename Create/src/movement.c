#include "movement.h"

void moveForward(int speed)
{
    create_drive_direct(speed, speed);
}

void moveBackward(int speed)
{
    create_drive_direct(speed * -1, speed * -1);
}

void moveStop()
{
    create_stop();
}

void moveForwardTime(int speed, int time)
{
    create_drive_direct(speed, speed);
    msleep(time);
    create_stop();
}

void moveBackwardTime(int speed, int time)
{
    create_drive_direct(speed * -1, speed * -1);
    msleep(time);
    create_stop();
}

void spinLeft(int speed)
{
    create_drive_direct(speed * -1, speed);
}

void spinRight(int speed)
{
    create_drive_direct(speed, speed * -1);
}