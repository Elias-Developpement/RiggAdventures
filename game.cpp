#include "game.h"

using namespace std;

Game::Game():
    current_map(NULL),
    window(NULL) {
        started = false;
        stopped = false;
        restarting = false;
        paused = false;
        speaking = false;
        transition = false;

        printf("Instance de Game");
        current_map = new Map();
        input = new Input();
        window = new Windows("Rigg Adventures", GAME_WIDTH, GAME_HEIGHT);
}

Game::~Game() {
    delete current_map;
    delete window;
    delete input;
}

void Game::start() {
    if(started) {
        return;
    }

    started = true;
}

void Game::restart() {
    if(restarting || !started) {
        return;
    }
}

void Game::stop() {
    if(stopped || !started) {
        return;
    }
}

void Game::draw() {
    if(current_map == NULL) {
        return;
    }

    // Check if a map is loaded
    if(current_map->is_loaded()) {
        current_map->draw(window->get_surface());
    }

    SDL_Flip(window->get_surface());
}

Input* Game::get_input() {
    return input;
}

void Game::update() {
    if(restarting || !started) {
        return;
    }

    input->update();
    //current_map->update();
    //player->update();
    //hud->update();
}

void Game::game_over() {

}

bool Game::has_map() {
    return current_map != NULL;
}

Map* Game::get_map() {
    return current_map;
}

void Game::set_map(int id, char* filename) {
    current_map->load();
}

bool Game::is_paused() {
    return paused;
}

bool Game::is_stopped() {
    return stopped;
}

bool Game::is_speaking() {
    return speaking;
}

bool Game::transition_in_progress() {
    return transition;
}
