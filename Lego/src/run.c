#include "run.h"

//REMEMBER MAX SPEED IS +1000 TICKS PER SECOND. There are 1800 ticks for one revolution of the wheel. 1 revolution per 1.8 seconds.

void run()
{
    //Instruction path here. The following are examples for starting clarification.

    //Drive until bump with digital sensor example.
    while (digital(0) == 0)
    {
        moveForward(1000);
    }
    moveStop();

    //Drive until analog sensor threshold is met.
    while (analog(0) <= 1500)
    {
        moveBackward(750);
    }
    moveStop();
}