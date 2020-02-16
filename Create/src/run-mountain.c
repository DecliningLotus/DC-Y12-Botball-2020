#include "run.h"

void run()
{
    unfoldArm();
    msleep(200);

    //Charge and Grab Botguy
    openClaw(500, 1700);
    spinLeftAngle(100, 11);
    moveForwardDistance(500, 800);
    while (get_create_rbump() == 0)
    {
        moveForward(200);
    }
    moveStop();
    closeClaw(1700, 500);
    msleep(200);

    //Sabotage Botguy
    moveBackwardDistance(100, 70);
    spinLeftAngle(100, 30);
    lowerArmSabotage();
    spinRightAngle(100, 35);
    msleep(200);
    openClaw(500, 1600);
    msleep(300);
    spinLeftAngle(100, 35);
    raiseArmSabotage();
    closeClaw(1600, 500);
    spinRightAngle(100, 30);
    msleep(200);
    moveBackwardDistance(100, 330);
    msleep(200);

    //Sweep Astronauts
    spinLeftAngle(100, 33);
    msleep(200);
    moveBackwardDistance(100, 210);
    msleep(200);
    closeClaw(1600, 500);
    msleep(200);
    spinLeftAngle(100, 57);
    msleep(200);
    moveBackwardDistance(50, 00);
    msleep(200);
    lowerArmAstro();
    msleep(200);
    spinRightAngle(100, 57);
    msleep(200);
    raiseArmAstro();
    msleep(200);
    moveForwardDistance(100, 260);

    //Set pos for communication Orb
    openClaw(500, 1650);
    msleep(500);
    spinLeftAngle(100, 84);
    msleep(500);
    lowerArmBottom(600, 180);

    // Go to communication orb
    moveForwardDistance(300, 50);
    msleep(200);

    //Pick up Communication Orb
    closeClaw(1650, 500);
    raiseArmTop(180, 450);
    msleep(500);

    //Head towards Communication Orb staging zone
    spinRightAngle(100, 137);
    msleep(30000);
    moveForwardDistance(300, 410);
    lowerArm();
    openClaw(500, 1200);
    msleep(250);
    closeClaw(1200, 500);
    msleep(300);
}