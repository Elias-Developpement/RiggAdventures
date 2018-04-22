#ifndef SPRITE_H
#define SPRITE_H

#include "defs.h"

class Sprite {
public:
    Sprite(char* filename);
    ~Sprite();
    SDL_Surface* get_sprite();
private:
    SDL_Surface *file;
};

#endif // SPRITE_H
