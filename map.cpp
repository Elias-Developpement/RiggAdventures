#include "map.h"

using namespace std;

Map::Map():
    loaded(false) {
    load();

    tileset = IMG_Load("tileset1.png");
    if(tileset == NULL) {
        exit(1);
    }
}

Map::~Map() {
    SDL_FreeSurface(tileset);
}

int Map::get_tile_index(int tile_x, int tile_y) {
    if(data == NULL) {
        return -1;
    }

    return data[tile_x][tile_y];
}

void Map::load() {
    FILE *file;

    file = fopen("world.map", "r");

    if(file == NULL) {
        printf("Impossible de trouver le fichier !\n");
        initialize();
        save();
    }

    for(int x = 0 ; x < MAP_MAX_WIDTH ; x++) {
        for(int y = 0 ; y < MAP_MAX_HEIGHT ; y++) {
            fscanf(file, "%d ", &data[x][y]);
        }
        fscanf(file, "\n");
    }

    loaded = true;
    fclose(file);
}

void Map::draw(SDL_Surface* surface) {
    SDL_Rect position_tile, position_index;

    for(int x = 0 ; x < GAME_WIDTH / TILE_SIZE ; x++) {
        for(int y = 0 ; y < GAME_HEIGHT / TILE_SIZE ; y++) {
            position_tile.x = x * TILE_SIZE;
            position_tile.y = y * TILE_SIZE;

            position_index.x = (data[x][y] % (tileset->w / TILE_SIZE)) * TILE_SIZE;
            position_index.y = (data[x][y] / (tileset->w / TILE_SIZE)) * TILE_SIZE;
            position_index.w = 32;
            position_index.h = 32;

            SDL_BlitSurface(tileset, &position_index, surface, &position_tile);
        }
    }
}

void Map::debug() {
    printf("Debug\n");
    for(int x = 0 ; x < MAP_MAX_WIDTH ; x++) {
        for(int y = 0 ; y < MAP_MAX_HEIGHT ; y++) {
            printf("%d ", data[x][y]);
        }
        printf("\n");
    }
}

bool Map::is_loaded() {
    return loaded;
}

void Map::set_tile(int x, int y, int index) {
    data[x][y] = index;
}

void Map::save() {
    FILE* file;

    file = fopen("world.map", "w");

    if(file == NULL) {
        exit(1);
    }

    for(int x = 0 ; x < MAP_MAX_WIDTH ; x++) {
        for(int y = 0 ; y < MAP_MAX_HEIGHT ; y++) {
            fprintf(file, "%d ", data[x][y]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
}

void Map::initialize() {
    printf("Initialisation\n");
    for(int x = 0 ; x < MAP_MAX_WIDTH ; x++) {
        for(int y = 0 ; y < MAP_MAX_HEIGHT ; y++) {
            data[x][y] = 1;
        }
    }
}

