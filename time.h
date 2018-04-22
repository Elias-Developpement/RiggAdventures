#ifndef TIME_H
#define TIME_H

#include "defs.h"

class Time {
public:
    Time();
    float get_elapsed_time();
    void reset();
private:
    float startTime;
    float elapsedTime;
};

#endif // TIME_H
