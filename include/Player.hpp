#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Position.hpp"

// Forward declarations
class PowerUp;
enum class Direction;

class Player {
public:
    Player(const std::string& name);
    ~Player(); // Destructor añadido para gestionar recursos si es necesario
    
    void move(Direction direction);
    void dropBomb();
    void collectPowerUp(PowerUp* powerUp);
    
    void increaseBombCapacity();
    void increaseBlastRadius();
    
    Position* getPosition() const;

private:
    std::string name;
    Position* position;
    int bombsLeft;
    int bombCapacity;
    int blastRadius;
    std::vector<PowerUp*> powerUps;
};

#endif // PLAYER_H