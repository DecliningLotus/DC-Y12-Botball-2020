#include "run.h"

//IMPORTANT - SPEED VALUES ARE IN mm/sec UNLIKE LEGO BOT. Max is 500mm/sec which is super fast.

void run()
{
    //Instruction path here. The following are examples just so people aren't confused.

    //Drive until bump with digital sensor example.
    while (digital(0) == 0)
    {
        moveForward(100);
    }
    moveStop();

    //Drive until analog sensor threshold is met.
    while (analog(0) <= 1500)
    {
        moveBackward(75);
    }
    moveStop();
}