#include "time.h"

Time::Time() {
    startTime = SDL_GetTicks();
    elapsedTime = 0;
}

float Time::get_elapsed_time() {
    elapsedTime = SDL_GetTicks() - startTime;
    return elapsedTime;
}

void Time::reset() {
    startTime = SDL_GetTicks();
    elapsedTime = 0;
}
