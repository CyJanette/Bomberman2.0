#include "Cell.hpp"

Cell::Cell(int x, int y) : x(x), y(y), powerUp(nullptr), bomb(nullptr) {}

Cell::~Cell() {
    delete powerUp;
    delete bomb;
}

bool Cell::hasBomb() const {
    return bomb != nullptr;
}

bool Cell::hasPowerUp() const {
    return powerUp != nullptr;
}

void Cell::setPowerUp(PowerUp* powerUp) {
    this->powerUp = powerUp;
}

void Cell::clearPowerUp() {
    delete powerUp;
    powerUp = nullptr;
}