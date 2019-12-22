#include <kipr/botball.h>

#define LEFT_MOTOR <port number>
#define RIGHT_MOTOR <port number>

void moveForward(int speed);

void moveBackward(int speed);

void moveStop();

void moveForwardDistance(int speed, int distance);

void moveBackwardDistance(int speed, int distance);

void moveForwardTime(int speed, int time);

void moveBackwardTime(int speed, int time);

void spinLeft(int speed, int time);

void spinRight(int speed, int time);