#include "windows.h"

Windows::Windows(const char* title) {
    surface = SDL_SetVideoMode(GAME_WIDTH, GAME_HEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    if(surface == NULL) {
        printf("Un probleme est survenue lors de la creation de la fenetre !\n");
        exit(1);
    }

    SDL_WM_SetCaption(title, NULL);
}

Windows::Windows(const char* title, int width, int height) {
    surface = SDL_SetVideoMode(width, height, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    if(surface == NULL) {
        printf("Un probleme est survenue lors de la creation de la fenetre !\n");
        exit(1);
    }

    SDL_WM_SetCaption(title, NULL);
}

void Windows::set_size(int width, int height) {
    surface = SDL_SetVideoMode(width, height, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    if(surface == NULL) {
        printf("Un probleme est survenue lors de la creation de la fenetre !\n");
        exit(1);
    }
}

void Windows::set_title(char* title) {
    SDL_WM_SetCaption(title, NULL);
}

int Windows::get_width() {
    return surface->w;
}

int Windows::get_height() {
    return surface->h;
}

SDL_Surface* Windows::get_surface() {
    return surface;
}
