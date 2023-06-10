#include "game.h"
#include <string.h>

#ifndef BB_GAME
#define BB_GAME

void initGame(Game *game, Player *player)
{
    game->player = *player;
    strcpy(game->gameID, "asdfghjjjasdfasdfasdfasd"); // TODO Change to auto gen
    game->tick_idx = 0;
}

bool tickGame(Game *game)
{
    game->tick_idx++;
    
    return true;
}

#endif // BB_GAME
