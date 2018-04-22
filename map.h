#ifndef MAP_H
#define MAP_H

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

class Map {
public:
    Map();
    ~Map();

    int get_tile_index(int tile_x, int tile_y);
    void load();
    bool is_loaded();
    void save();
    void debug();
    void draw(SDL_Surface* surface);
    void set_tile(int x, int y, int index);
    void create_map();
    void initialize();
private:
    int data[500][500];
    int width;
    int height;
    char* map_name;
    char* map_id;
    bool loaded;

    SDL_Surface* tileset;
};

#endif // MAP_H
