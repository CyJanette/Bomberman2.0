#ifndef POWERUP_H
#define POWERUP_H

#include <string>
#include "Player.hpp" // Para que `PowerUp` conozca a `Player`

class PowerUp {
public:
    PowerUp(const std::string& type);
    void apply(Player* player);

private:
    std::string type;
    bool isActive;
};

#endif // POWERUP_H