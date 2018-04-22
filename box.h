#ifndef BOX_H
#define BOX_H

#include "defs.h"
#include "vector.h"

class Box {
public:
    Box(int x1, int y1, int x2, int y2);
    ~Box();
    int get_width();
    int get_height();
    int get_x();
    int get_y();
    Vector* get_minima();
    Vector* get_maxima();
    bool is_colliding(Box* object);
private:
    Vector* minima;
    Vector* maxima;
};

#endif // BOX_H
