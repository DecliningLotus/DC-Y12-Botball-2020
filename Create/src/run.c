#include "run.h"

void run()
{
    unfoldArm();
    msleep(200);

    //Charge and Grab Botguy
    openClaw(500, 1600);
    spinLeftAngle(100, 11);
    moveForwardDistance(500, 800);
    while (get_create_rbump() == 0)
    {
        moveForward(200);
    }
    moveStop();
    closeClaw(1600, 500);
    msleep(200);

    //Drop Botguy
    moveBackwardDistance(100, 430);
    openClaw(500, 1600);
    moveForwardDistance(100, 20);
    msleep(200);

    //Sweep Astronauts
    spinLeftAngle(100, 33);
    moveBackwardDistance(100, 210);
    closeClaw(1600, 500);
    spinLeftAngle(100, 57);
    msleep(200);
    moveBackwardDistance(50, 00);
    lowerArmAstro();
    msleep(200);
    spinRightAngle(100, 57);
    raiseArmAstro();
    moveForwardDistance(100, 260);

    //Set pos for communication Orb
    openClaw(500, 1400);
    spinLeftAngle(100, 91);
    lowerArmBottom(600, 180);

    // Go to communication orb
    moveForwardDistance(300, 50);
    msleep(100);

    //Pick up Communication Orb
    closeClaw(1400, 500);
    raiseArmTop(180, 450);

    //Head towards Communication Orb staging zone
    spinRightAngle(100, 160);
    moveForwardDistance(300, 420);
    lowerArm();
    openClaw(500, 1200);
    msleep(15);
    closeClaw(1200, 500);
    msleep(300);
}