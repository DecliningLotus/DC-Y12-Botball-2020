#include "run.h"

//REMEMBER MAX SPEED IS +1000 TICKS PER SECOND. There are 1800 ticks for one revolution of the wheel. 1 revolution per 1.8 seconds.

void run()
{
    //Move towards Material Transport.
    moveForwardTime(1000, 500);
    spinRight(1000, 2275);
    moveForwardTime(1000, 6000);

    //Pull Material Transport out.
    openClaw();
    moveForwardTime(1000, 1000);
    spinRight(1000, 1000);
    closeClaw();

    //Bring Material Transport underneath bridge.
    moveBackwardTime(1000, 3000);
    spinLeft(1000, 2275);
    moveForwardTime(1000, 3000);

    //Use claw to bring Royal Blue Puffles down into Material Transport.
    raiseArm();
    msleep(300);
    sweep();
    sweep();
    sweep();

    //Push Material Transport into Processing Zone.
    moveForwardTime(1000, 2000);
    spinRight(1000, 2275);
    moveForwardTime(1000, 2000);

    //Return to Ramp and go up to park.
    moveBackwardTime(1000, 2000);
    spinLeft(1000, 2275);
    moveBackwardTime(1000, 2000 + 3000 + 500);

    spinRight(1000, 2275);
    moveForward(1000, 2000);
    spinLeft(1000, 2275);

    moveForwardTime(1500, 4000);
    spinLeft(1000, 2275);
    moveForwardTime(1000, 1000);
}