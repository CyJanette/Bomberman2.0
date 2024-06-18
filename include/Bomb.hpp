#ifndef BOMB_H
#define BOMB_H

#include "Player.hpp"
#include "Position.hpp"

class Bomb {
public:
    Bomb(Player* owner, Position* position);
    void explode();
    
private:
    Player* owner;
    Position* position;
    int timer;
};

#endif // BOMB_H