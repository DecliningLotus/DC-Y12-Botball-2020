#include "run.h"

//IMPORTANT - SPEED VALUES ARE IN mm/sec UNLIKE LEGO BOT. Max is 500mm/sec which is super fast.

void run()
{
    //Begin moving Create towards first point in front of Communication Orb.
    moveForwardDistance(100, <value>);
    spinLeftAngle(90);

    //Activate crane to pick up Communication Orb.
    //Crane mechanics TBD

    //Spin spinners to correct colors.
    //Spinner mechnaics TBD.

    //Begin moving towards second point in front of Mountain View.
    spinRightAngle(180);
    while (analog(<distance sensor port>) <= <analog value>))
        { //Distance sensor measuring distance from Minecart ahead, until it should stop.
            moveForward(100);
        }
    moveStop();

    spinLeftAngle(90);
    moveForwardDistance(100, <value>);

    //Activate crane to pick up Botguy and place Communication Orb.
    //Crane mechanics TBD

    //Begin sweep of leftover puffles.
    spinRightAngle(180);
    moveForwardDistance(100, <value>);
    //Sweep mechanics TBG

    //Return to spot in front of puffle stockpiles.
    spinLeftAngle(100, 45);
    moveForwardDistance(100, <value>);
    spinLeftAngle(100, 45);

    //Begin sorting process.
    //Sorting mechanics TBD.
}