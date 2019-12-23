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

void moveForwardDistance(int speed, int distance)
{
    set_create_distance(0);
    while (get_create_distance() < distance)
    {
        create_drive_direct(speed, speed);
    }
    moveStop();
}

void moveBackwardDistance(int speed, int distance)
{
    set_create_distance(0);
    while (get_create_distance() < distance)
    {
        create_drive_direct(speed * -1, speed * -1);
    }
    moveStop();
}

void spinLeft(int speed)
{
    create_drive_direct(speed * -1, speed);
}

void spinRight(int speed)
{
    create_drive_direct(speed, speed * -1);
}

void spinLeftAngle(int speed, int angle)
{
    set_create_total_angle(0);
    while (get_create_angle() < angle)
    {
        create_drive_direct(speed * -1, speed);
    }
    moveStop();
}

void spinRightAngle(int speed, int angle)
{
    set_create_total_angle(0);
    while (get_create_angle() * -1 < angle)
    {
        create_drive_direct(speed, speed * -1);
    }
    moveStop();
}