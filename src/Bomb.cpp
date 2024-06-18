#include "Bomb.hpp"

Bomb::Bomb(Player* owner, Position* position)
    : owner(owner), position(position), timer(3) {} // Example timer value

void Bomb::explode() {
    // Logic for bomb explosion
}