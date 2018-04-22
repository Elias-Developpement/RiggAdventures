#ifndef INPUT_H
#define INPUT_H

#include "map.h"
#include "defs.h"
#include "windows.h"

class Input {
public:
    Input();

    void update();
    void read();
    int get_mouse_x();
    int get_mouse_y();
private:
    bool up;
    bool down;
    bool left;
    bool right;
    bool control;
    bool escape;
    bool right_click;
    bool left_click;
    bool wheelup;
    bool wheeldown;

    int index;
    int mouse_x;
    int mouse_y;
};

#endif // INPUT_H
