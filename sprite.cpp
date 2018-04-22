#include "sprite.h"

Sprite::Sprite(char* filename) {
    SDL_Surface* temp = IMG_Load(filename);

    if(temp == NULL) {
        exit(1);
    }

    SDL_SetColorKey(temp, (SDL_SRCCOLORKEY | SDL_RLEACCEL), SDL_MapRGB(temp->format, 0, 0, 0));

    file = SDL_DisplayFormat(temp);
    SDL_FreeSurface(temp);

    if(file == NULL) {
        exit(1);
    }
}

Sprite::~Sprite() {
    SDL_FreeSurface(file);
}

SDL_Surface* Sprite::get_sprite() {
    return file;
}
