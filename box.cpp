#include "box.h"

Box::Box(int x1, int y1, int x2, int y2) {
    minima = new Vector(x1, y1);
    maxima = new Vector(x2, y2);
}

Box::~Box() {
    delete minima;
    delete maxima;
}

bool Box::is_colliding(Box* object) {
    if((minima->get_x() > object->get_maxima()->get_x()) || (object->get_minima()->get_x() > maxima->get_x())) {
        return true;
    }

    if((minima->get_y() > object->get_maxima()->get_y()) || (object->get_minima()->get_y() > maxima->get_y())) {
        return true;
    }

    return false;
}

Vector* Box::get_minima() {
    return minima;
}

Vector* Box::get_maxima() {
    return maxima;
}

int Box::get_width() {
    return maxima->get_x() - minima->get_x();
}

int Box::get_height() {
    return maxima->get_y() - minima->get_y();
}

int Box::get_x() {
    return minima->get_x();
}

int Box::get_y() {
    return minima->get_y();
}
