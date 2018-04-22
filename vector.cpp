#include "vector.h"

Vector::Vector() {
    x = 0;
    y = 0;
}

Vector::Vector(int x, int y):
    x(x),
    y(y) {
}

int Vector::get_x() {
    return x;
}

int Vector::get_y() {
    return y;
}

void Vector::set_x(int x) {
    this->x = x;
}

void Vector::set_y(int y) {
    this->y = y;
}

void Vector::setVector(int x, int y) {
    this->x = x;
    this->y = y;
}
