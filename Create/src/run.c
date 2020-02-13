#include "run.h"

void run()
{
    unfoldArm();
    msleep(200);

    //Charge and Grab Botguy
    openClaw(500, 1600);
    spinLeftAngle(100, 11);
    moveForwardDistance(400, 800);
    while (get_create_rbump() == 0)
    {
        moveForward(200);
    }
    moveStop();
    closeClaw(1600, 500);
    msleep(200);

    //Drop Botguy
    spinRightAngle(100, 10);
    moveBackwardDistance(100, 430);
    openClaw(500, 1600);
    moveForwardDistance(100, 20);
    msleep(200);

    //Sweep Astronauts
    spinLeftAngle(100, 33);
    moveBackwardDistance(100, 260);
    closeClaw(1600, 500);
    spinLeftAngle(100, 57);
    msleep(200);
    moveBackwardDistance(50, 25);
    lowerArmAstro();
    msleep(200);
    spinRightAngle(100, 57);
    raiseArmAstro();
    moveForwardDistance(100, 260);

    //Set pos for communication Orb
    openClaw(500, 1400);
    spinLeftAngle(100, 127);
    lowerArmBottom(600, 180);

    // Go to communication orb
    moveForwardDistance(300, 90);
    msleep(100);

    //Pick up Communication Orb
    closeClaw(1400, 500);
    raiseArmTop(180, 450);

    //Head towards Communication Orb staging zone
    spinRightAngle(100, 154);
    moveForwardDistance(300, 420);
    openClaw(500, 1200);
    msleep(200);
    closeClaw(1200, 500);
}