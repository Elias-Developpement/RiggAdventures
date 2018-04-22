#include "main.h"

using namespace std;

int main(int argc, char** argv)
{
    if(argc && argv);

    freopen("CON", "w", stdout);
    freopen("CON", "r", stdin);
    freopen("CON", "w", stderr);

    // To control the loop
    bool is_running = true;

    Game game;

    initialize_components();
    // Clean resources used
    atexit(cleanup);

    while(is_running) {
        // Read inputs
        game.get_input()->read();

        // Refresh game data
        game.update();

        // Refresh screen
        game.draw();

        SDL_Delay(1);
    }

    exit(0);
}
