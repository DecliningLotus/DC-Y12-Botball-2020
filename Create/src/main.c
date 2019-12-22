#include <kipr/botball.h>
#include "stdafx.h"

int main()
{
    create_connect();
    wait_for_light(<analog port>);
    shut_down_in(119);
    enable_servos();
    printf("Create initialization complete!");

    run();

    disable_servos();
    ao(); //Is this neccessary for Create???
    create_stop();
    create_disconnect();
    printf("Create shutdown complete.");
    return 0;
}