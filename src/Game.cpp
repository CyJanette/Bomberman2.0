#include "Game.hpp"

Game::Game(int width, int height) {
    board = new Board(width, height);
    timer = new Timer();
    // Initialize players and add them to the board
}

Game::~Game() {
    delete board;
    delete timer;
    for (Player* player : players) {
        delete player;
    }
}

void Game::startGame() {
    timer->start();
}

void Game::endGame() {
    timer->stop();
}

void Game::update() {
    // Update game logic, check bomb explosions, etc.
}