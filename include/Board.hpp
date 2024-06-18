#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Cell.hpp"
#include "Player.hpp"

class Board {
public:
    Board(int width, int height);
    ~Board();

    void generateBoard();
    void addPlayer(Player* player);
    Cell* getCell(int x, int y) const;
    
    int getWidth() const;
    int getHeight() const;
    std::vector<Player*> getPlayers() const;

private:
    int width;
    int height;
    std::vector<std::vector<Cell*>> cells;
    std::vector<Player*> players;
};

#endif // BOARD_H