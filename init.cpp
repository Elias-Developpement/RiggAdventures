#include "init.h"

void initialize_components() {
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("La SDL n'a pas pu être initialisee : %s\n", SDL_GetError());
        exit(1);
    }

    if(!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
        exit(1);
    }

    if(TTF_Init() < 0) {
        printf("Le module d'ecriture n'a pas pu etre initialise !\n");
        exit(1);
    }

    //if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) < 0) {
    //    exit(1);
    //}
}

void cleanup(void) {
    // Clean resources

    //Mix_FreeMusic(environnement.music);
    TTF_Quit();
    //Mix_CloseAudio();
    SDL_Quit();
}

