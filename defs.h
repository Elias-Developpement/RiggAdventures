#ifndef DEFS_H
#define DEFS_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

#define GAME_WIDTH              800
#define GAME_HEIGHT             640

#define TILE_SIZE               32

#define MAP_MAX_WIDTH           500
#define MAP_MAX_HEIGHT          500
#define MAP_MAX_LAYERS          4

#define UP                      0
#define DOWN                    1
#define LEFT                    2
#define RIGHT                   3

#define LOW_LAYER               0
#define HERO_LAYER              1
#define HIGH_LAYER              2
#define EVENT_LAYER             3

#endif // DEFS_H
