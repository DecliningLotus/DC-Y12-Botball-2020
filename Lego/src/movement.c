#include "movement.h"

//1800 ticks per revolution. gmpc(<port>) returns tick position.
//cmpc(<port>) clears tick counter.

//motor(0, 100);
// Turns on motor port #0 at 100% power.  Is great for turning gears or winding up string on a pulley. Is not so great for driving robots as it is dependent on battery charge.
//mav(0, 800); Max values are +- 1000, however can go as far as 1500 with reduced motor accuracy.
// Move motor on port #0 at 800 ticks/sec.mIs great for driving robots and not as dependent on battery charge. Must use wait_for_milliseconds function correctly?
//mrp(0, 800, 3000);
// Move motor on port #0 forward 3000 ticks at 800 ticks/sec. Most precise but difficult to calculate.

//Experimental
/* void moveForwardStraight(int speed, int tickcount)
{
    cmpc(LEFT_MOTOR);
    cmpc(RIGHT_MOTOR);

    while (gmpc(LEFT_MOTOR) < tickcount)
    {
        mav(LEFT_MOTOR, speed - 100);
        if (gmpc(RIGHT_MOTOR) < gmpc(LEFT_MOTOR))
        {
            mav(RIGHT_MOTOR, speed);
        }
        else
        {
            mav(RIGHT_MOTOR, speed - 200);
        }
    }
} */

void moveForward(int speed)
{
    mav(LEFT_MOTOR, speed);
    mav(RIGHT_MOTOR, speed);
}

void moveBackward(int speed)
{
    mav(LEFT_MOTOR, speed * -1);
    mav(RIGHT_MOTOR, speed * -1);
}

void moveStop()
{
    mav(LEFT_MOTOR, 0);
    mav(RIGHT_MOTOR, 0);
}

void moveForwardDistance(int speed, int distance) //distance in ticks
{
    mrp(LEFT_MOTOR, speed, distance);
    mrp(RIGHT_MOTOR, speed, distance);
}

void moveBackwardDistance(int speed, int distance) //distance in ticks
{
    mrp(LEFT_MOTOR, speed * -1, distance);
    mrp(RIGHT_MOTOR, speed * -1, distance);
}

void moveForwardTime(int speed, int time)
{
    mav(LEFT_MOTOR, speed);
    mav(RIGHT_MOTOR, speed);
    msleep(time);
    mav(LEFT_MOTOR, 0);
    mav(RIGHT_MOTOR, 0);
}

void moveBackwardTime(int speed, int time)
{
    mav(LEFT_MOTOR, speed * -1);
    mav(RIGHT_MOTOR, speed * -1);
    msleep(time);
    mav(LEFT_MOTOR, 0);
    mav(RIGHT_MOTOR, 0);
}

void spinLeft(int speed, int time)
{
    mav(LEFT_MOTOR, speed * -1);
    mav(RIGHT_MOTOR, speed);
    msleep(time);
    mav(LEFT_MOTOR, 0);
    mav(RIGHT_MOTOR, 0);
}

void spinRight(int speed, int time)
{
    mav(LEFT_MOTOR, speed);
    mav(RIGHT_MOTOR, speed * -1);
    msleep(time);
    mav(LEFT_MOTOR, 0);
    mav(RIGHT_MOTOR, 0);
}