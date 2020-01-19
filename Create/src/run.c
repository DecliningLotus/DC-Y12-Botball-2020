#include "run.h"

//IMPORTANT - SPEED VALUES ARE IN mm/sec UNLIKE LEGO BOT. Max is 500mm/sec which is super fast.

void run()
{
    //Charge at Larry
    spinRightAngle(250, 47);
    moveForwardDistance(450, 1000);
    while (analog(IR_PORT) < 500)
    {
        moveForward(200);
    }
    moveStop();

    //Come back to Communication Orb Zone
    spinLeftAngle(250, 182);
    moveForwardDistance(450, 800);
    spinRightAngle(250, 47);
    moveForwardDistance(250, 500);

    //Shove Ore Boxes to Storage
    //Do ore box stuff

    //Pick up Communication Orb
    openClaw();
    lowerArmBottom();
    closeClaw();
    raiseArmTop();

    //Head towards Communication Orb staging zone
    spinLeftAngle(250, 182);
    moveForwardDistance(450, 500);
    spinLeftAngle(250, 47);
    while (analog(IR_PORT) < 500)
    {
        moveForward(300);
    }
    moveStop();

    //Place communication and HOLD
    raiseArmTop();
    while (analog(IR_PORT) < 300)
    {
        moveForward(500);
    }
    moveStop();

    //Pull up Minecart with second crane
    //Mechanics TBD
}