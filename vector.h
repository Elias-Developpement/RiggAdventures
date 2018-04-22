#ifndef VECTOR_H
#define VECTOR_H

#include "defs.h"

class Vector {
public:
    Vector();
    Vector(int x, int y);

    void setVector(int x, int y);
    int get_x();
    int get_y();
    void set_x(int x);
    void set_y(int y);
private:
    int x;
    int y;
};

#endif // VECTOR_H
