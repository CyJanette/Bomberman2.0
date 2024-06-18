#include "Board.hpp"

Board::Board(int width, int height)
    : width(width), height(height), cells(height, std::vector<Cell*>(width, nullptr)) {
    generateBoard();
}

Board::~Board() {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            delete cells[y][x];
        }
    }
    for (Player* player : players) {
        delete player;
    }
}

void Board::generateBoard() {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            cells[y][x] = new Cell(x, y);
        }
    }
}

void Board::addPlayer(Player* player) {
    players.push_back(player);
    Cell* cell = getCell(player->getPosition()->getX(), player->getPosition()->getY());
    // Add player to the cell or handle player initialization on the board
}

Cell* Board::getCell(int x, int y) const {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return cells[y][x];
    }
    return nullptr;
}

int Board::getWidth() const {
    return width;
}

int Board::getHeight() const {
    return height;
}

std::vector<Player*> Board::getPlayers() const {
    return players;
}