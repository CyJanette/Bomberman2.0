#include "Position.hpp"

Position::Position(int x, int y) : x(x), y(y) {}

int Position::getX() const {
    return x;
}

void Position::setX(int x) {
    this->x = x;
}

int Position::getY() const {
    return y;
}

void Position::setY(int y) {
    this->y = y;
}