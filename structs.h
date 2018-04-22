#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct Environnement {
    Mix_Music *music;
    Mix_Music *sword;
    Mix_Music *hit;
}Environnement;

typedef struct Cursor {
    SDL_Surface *skin;

    int x, y;
}Cursor;

#endif // STRUCTS_H
