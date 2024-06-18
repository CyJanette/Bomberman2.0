#include "PowerUp.hpp"

PowerUp::PowerUp(const std::string& type) : type(type), isActive(true) {}

void PowerUp::apply(Player* player) {
    if (isActive) {
        if (type == "extra_bomb") {
            player->increaseBombCapacity();
        } else if (type == "increase_range") {
            player->increaseBlastRadius();
        }
        isActive = false;
    }
}