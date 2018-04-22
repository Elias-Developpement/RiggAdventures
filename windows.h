#ifndef WINDOW_H
#define WINDOW_H

#include "defs.h"

class Windows {
public:
    Windows(const char* title);
    Windows(const char* title, int width, int height);

    void set_size(int width, int height);
    void set_title(char* title);
    int get_width();
    int get_height();
    SDL_Surface* get_surface();
private:
    SDL_Surface* surface;
};

#endif // WINDOW_H
