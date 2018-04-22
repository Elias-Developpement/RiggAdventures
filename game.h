#ifndef GAME_H
#define GAME_H

#include "defs.h"
#include "input.h"
#include "map.h"
#include "windows.h"

class Game {
public:
    Game();
    ~Game();

    void draw();
    void update();

    bool has_map();
    Map* get_map();
    Input* get_input();
    void set_map(int id, char* filename);

    // Check game states
    bool is_paused();
    bool is_speaking();
    bool is_stopped();
    bool transition_in_progress();

    // Set state
    void start();
    void stop();
    void restart();

    void game_over();
private:
    bool started;
    bool stopped;
    bool restarting;

    bool paused;
    bool speaking;
    bool transition;

    Map* current_map;
    Windows* window;
    Input* input;
    //Camera* main_camera;
};

#endif // GAME_H
