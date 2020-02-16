#include <kipr/botball.h>

#define ARM_PORT 1
#define CLAW_PORT 2
#define MOTOR_1_PORT 0

void unfoldArm();

void raiseArmTop(int start, int end);

void lowerArmBottom(int start, int end);

void openClaw(int start, int end);

void closeClaw(int start, int end);

void raiseArmAstro();

void lowerArmAstro();

void lowerArm();

void lowerArmSabotage();

void raiseArmSabotage();