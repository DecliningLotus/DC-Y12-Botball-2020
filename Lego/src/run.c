#include "run.h"

//REMEMBER MAX SPEED IS +1000 TICKS PER SECOND. There are 1800 ticks for one revolution of the wheel. 1 revolution per 1.8 seconds.

void run()
{
    //Begin Lego movement down the board sweeping puffles.
    int i;
    for (size_t i = 0; i < 4; i++)
    {
        //Movement for first 4 Minecarts
        while (analog(<port>) >= <value>)
        {
            //IR Reflectance sensor checking if there is minecart or not.
            moveForward(1000);
        }
        moveStop();

        //Sweep puffles.
        //Sweeping mechanics TBD.
    }

    //Cross underneath bridge.
    moveForwardDistance(900, <distance ticks>);

    //Continue with last 3 Minecarts.
    for (size_t i = 0; i < 3; i++)
    {
        while (analog(<port>) >= <value>)
        {
            //IR Reflectance sensor checking if there is minecart or not.
            moveForward(1000);
        }
        moveStop();

        //Sweep puffles.
        //Sweeping mechanics TBD.
    }

    //Begin reversing to starting position.
    moveBackwardDistance(1499, <distance>);
    while (digital(<port>) == 0) //Slow down bot before hitting the PVC pipe to ensure we don't crash it hard.
    {
        moveBackward(500);
    }
    moveStop();

    //Head in front of Material Transport.
    moveForwardDistance(400, 600); //Ease the bot out so it has turning space.
    spinRight(300, <time>);

    moveForwardDistance(1500, <distance>);
    while (digital(<port>) == 0) //Slow down bot before hitting PVC pipe.
    {
        moveForward(500);
    }
    moveStop();
}