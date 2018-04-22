#include "input.h"

Input::Input() {
    up = false;
    down = false;
    left = false;
    right = false;
    control = false;
    escape = false;
    right_click = false;
    left_click = false;
    wheeldown = false;
    wheelup = false;
    index = 1;
    mouse_x = 0;
    mouse_y = 0;
}

void Input::read() {
    /*SDL_Event event;
    SDL_PollEvent(&event);

    switch(event.type) {
    case SDL_QUIT:
        exit(1);
        break;
    case SDL_KEYDOWN:
        switch(event.key.keysym.sym) {
        case SDLK_ESCAPE:
            exit(1);
            break;
        case SDLK_UP:
            up = true;
            break;
        case SDLK_DOWN:
            down = true;
            break;
        case SDLK_LEFT:
            left = true;
            break;
        case SDLK_RIGHT:
            right = true;
            break;
        }
        break;
    case SDL_KEYUP:
        switch(event.key.keysym.sym) {
        case SDLK_UP:
            up = false;
            break;
        case SDLK_DOWN:
            down = false;
            break;
        case SDLK_LEFT:
            left = false;
            break;
        case SDLK_RIGHT:
            right = false;
            break;
        }
        break;
    case SDL_MOUSEBUTTONDOWN:
        switch(event.button.button) {
        case SDL_BUTTON_LEFT:
            left_click = true;
            break;
        case SDL_BUTTON_RIGHT:
            right_click = true;
            break;
        case SDL_BUTTON_WHEELDOWN:
            wheeldown = true;
            break;
        case SDL_BUTTON_WHEELUP:
            wheelup = true;
            break;
        }
    case SDL_MOUSEBUTTONUP:
        switch(event.button.button) {
        case SDL_BUTTON_LEFT:
            left_click = false;
            break;
        case SDL_BUTTON_RIGHT:
            right_click = false;
            break;
        }

    }

    SDL_GetMouseState(&mouse_x, &mouse_y);*/
}

void Input::update() {
    if(up) {
        // Move hero up
    }

    if(left) {
        // Move hero left
    }

    if(right) {
        // Move hero right
    }

    if(down) {
        // Move hero down
    }

    if(left_click) {
        // Add tile
        //current_map->set_tile(mouse_x / TILE_SIZE, mouse_y / TILE_SIZE, index);
    }
    else if(right_click) {
        // Erease tile
        //current_map->set_tile(mouse_x / TILE_SIZE, mouse_y / TILE_SIZE, 0);
    }

    if(wheeldown) {
        index--;
        if(index <= 0) {
            index = 0;
        }

        wheeldown = false;
    }
    else if(wheelup) {
        index++;
        if(index >= 24) {
            index = 24;
        }

        wheelup = false;
    }

    if(up || left || down || right) {
        SDL_Delay(10);
    }
}

int Input::get_mouse_x() {
    return mouse_x;
}

int Input::get_mouse_y() {
    return mouse_y;
}
