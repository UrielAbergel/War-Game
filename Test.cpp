
#include "doctest.h"
#include <cassert>
#include <sys/types.h>
#include "Game.hpp"
using namespace WarGame;
TEST_CASE("MINI GAME")
{
    Game::Game(): board (8, 8) {
        // Add soldiers for player 1:
        board[{0,1}] = new FootSoldier(1);
        board[{0,3}] = new FootCommander(1);
        board[{0,5}] = new FootSoldier(1);
        // Add soldiers for player 2:
        board[{7,1}] = new FootSoldier(2);
        board[{7,3}] = new FootCommander(2);
        board[{7,5}] = new FootSoldier(2);
        // In your game, you can put more soldier types, such as the sniper and the paramedic types.
    }
}


