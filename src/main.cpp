//23110191
//
#include "Game.hpp"

using namespace std;

int main() {
    Game game(10, 10); //Board size
    game.startGame();

    // Main game loop
    while (true) {
        game.update();
        // Break the loop under certain conditions
    }

    game.endGame();
    return 0;
}