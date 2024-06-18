#include "Player.hpp"
#include "PowerUp.hpp"
#include <iostream>

 
enum class Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

Player::Player(const std::string& name)
    : name(name), position(new Position(0, 0)), bombsLeft(1), bombCapacity(1), blastRadius(1) {}

Player::~Player() {
    delete position;
}

void Player::move(Direction direction) {
    switch (direction) {
        case Direction::UP:
            position->setY(position->getY() - 1);
            break;
        case Direction::DOWN:
            position->setY(position->getY() + 1);
            break;
        case Direction::LEFT:
            position->setX(position->getX() - 1);
            break;
        case Direction::RIGHT:
            position->setX(position->getX() + 1);
            break;
    }
}

void Player::dropBomb() {
    if (bombsLeft > 0) {
        // Lógica para dejar caer una bomba
        std::cout << name << " dropped a bomb." << std::endl;
        bombsLeft--;
    } else {
        std::cout << name << " has no bombs left." << std::endl;
    }
}

void Player::collectPowerUp(PowerUp* powerUp) {
    powerUps.push_back(powerUp);
    powerUp->apply(this);
}

void Player::increaseBombCapacity() {
    bombCapacity++;
    bombsLeft++;
    std::cout << name << " increased bomb capacity to " << bombCapacity << "." << std::endl;
}

void Player::increaseBlastRadius() {
    blastRadius++;
    std::cout << name << " increased blast radius to " << blastRadius << "." << std::endl;
}

Position* Player::getPosition() const {
    return position;
}