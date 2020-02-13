#include "run.h"

void run()
{
    //unfoldArm();
    //msleep(300);

    //Charge and Grab Botguy
    openClaw(600, 1600);
    spinLeftAngle(100, 11);
    moveForwardDistance(300, 800);
    while (get_create_rbump() == 0)
    {
        moveForward(200);
    }
    moveStop();
    closeClaw(1600, 600);
    msleep(200);

    //Drop Botguy
    spinRightAngle(100, 10);
    moveBackwardDistance(100, 410);
    openClaw(600, 1600);
    msleep(200);

    //Sweep Astronauts
    spinLeftAngle(100, 37);
    moveBackwardDistance(100, 250);
    closeClaw(1600, 600);
    spinLeftAngle(100, 57);
    msleep(200);
    lowerArmAstro();
    msleep(200);
    spinRightAngle(100, 57);
    raiseArmAstro();
    moveForwardDistance(100, 250);
    spinRightAngle(100, 20);

    //Set pos for communication Orb
    openClaw(600, 1400);
    spinLeftAngle(100, 134);
    lowerArmBottom();

    // Go to communication orb
    moveForwardDistance(300, 100);
    msleep(100);

    //Pick up Communication Orb
    closeClaw(1400, 600);
    raiseArmTop();

    //Head towards Communication Orb staging zone
    spinRightAngle(100, 143);
    moveForwardDistance(300, 420);
    lowerClaw();
    openClaw(600, 1200);
    msleep(200);
    closeClaw(1200, 600);
}