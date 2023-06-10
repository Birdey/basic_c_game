#include "player.h"
#include <stdbool.h>

#ifndef BB_GAME_H
#define BB_GAME_H

typedef struct Game{
    Player player;
    char (gameID)[25];
    int tick_idx;
} Game;

void initGame(Game *game, Player *player);
bool tickGame(Game *game);

#endif // BB_GAME
