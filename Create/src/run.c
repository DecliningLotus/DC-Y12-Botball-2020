#include "run.h"

//IMPORTANT - SPEED VALUES ARE IN mm/sec UNLIKE LEGO BOT. Max is 500mm/sec which is super fast.

void run()
{
    //    unfoldArm();
    //    msleep(5000);

    //Charge and Grab BotGuy
    msleep(3000);
    openClaw(2000);
    spinLeftAngle(100, 46);
    moveForwardDistance(300, 800);
    while (get_create_rbump() == 0)
    {
        moveForward(150);
    }
    moveStop();
    closeClaw(2000);

    //Drop BotGuy
    moveBackwardDistance(100, 215);
    spinLeftAngle(100, 40);

    //Set pos for communication Orb
    motor(MOTOR_1_PORT, 50);
    msleep(5000);
    motor(MOTOR_1_PORT, 0);
    set_servo_position(ARM_PORT, 250);
    msleep(500);
    spinLeftAngle(100, 90);
    openClaw(1800);

    // Go to communication orb
    moveBackwardDistance(200, 100);
    msleep(1000);
    spinLeftAngle(100, 40);

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