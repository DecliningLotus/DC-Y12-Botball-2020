#include <kipr/botball.h>
#include "stdafx.h"

int main()
{
    wait_for_light(<analog port>);
    shut_down_in(119);
    enable_servos();
    printf("Lego initialization complete!");

    run();

    disable_servos();
    ao();
    printf("Lego shutdown complete.");
    return 0;
}