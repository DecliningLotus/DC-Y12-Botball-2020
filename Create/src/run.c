#include "run.h"

//IMPORTANT - SPEED VALUES ARE IN mm/sec UNLIKE LEGO BOT. Max is 500mm/sec which is super fast.

void run()
{
    //unfoldArm();
    //msleep(300);

    //Charge and Grab BotGuy
    openClaw();
    spinLeftAngle(100, 18);
    moveForwardDistance(300, 800);
    while (get_create_rbump() == 0)
    {
        moveForward(200);
    }
    moveStop();
    closeClaw();
    msleep(200);

    //Drop BotGuy
    moveBackwardDistance(100, 300);
    spinRightAngle(60, 90);
    openClaw();
    msleep(500);
    spinLeftAngle(60, 90);

    //Set pos for communication Orb
    spinLeftAngle(100, 141);
    lowerArmBottom();

    // Go to communication orb
    moveForwardDistance(300, 230);
    msleep(100);

    //Pick up Communication Orb
    closeClaw();
    raiseArmTop();

    //Head towards Communication Orb staging zone
    spinRightAngle(100, 141);
    moveForwardDistance(300, 250);
    while (get_create_rbump() == 0)
    {
        moveForward(300);
    }
    moveStop();
}