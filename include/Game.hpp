#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include "Board.hpp"
#include "Player.hpp"
#include "Timer.hpp"

class Game {
public:
    Game(int width, int height);
    ~Game();
    
    void startGame();
    void endGame();
    void update();
    
private:
    Board* board;
    std::vector<Player*> players;
    Timer* timer;
};

#endif // GAME_H