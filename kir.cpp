#include "ev3dev-lang-cpp/ev3dev.h"
#include <iostream>
#include <unistd.h>

ev3dev::large_motor left(ev3dev::OUTPUT_C);
ev3dev::large_motor right(ev3dev::OUTPUT_B);
int main()
{
    usleep(3100000);

    while(true) {
    right.set_speed_sp(1050);
    right.run_forever();

    left.set_speed_sp(1050);
    left.run_forever();
    }

    return 0;
}
