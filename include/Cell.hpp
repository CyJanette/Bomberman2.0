#ifndef CELL_H
#define CELL_H

#include "PowerUp.hpp"
#include "Bomb.hpp"

class Cell {
public:
    Cell(int x, int y);
    ~Cell();

    bool hasBomb() const;
    bool hasPowerUp() const;
    void setPowerUp(PowerUp* powerUp);
    void clearPowerUp();
    
private:
    int x, y;
    PowerUp* powerUp;
    Bomb* bomb;
};

#endif // CELL_H