// Copyright (c) 2023 Christoffer von Matèrn. All Rights Reserved.

#include <stdio.h>
#include "game.h"
#include "gameUtils.h"

void GameLoop()
{
    Player player;
    initPlayer(&player);
    Game game;
    printf("Starting Game...\n");
    initGame(&game, &player);
    printf("Game started...\n");
    while (1)
    {
        tickGame(&game);
        printf("1. Continue\n");
        printf("2. Exit\n");

        if (getInput(1, 2) == 2)
        {
            break;
        }
    }
    printf("Game Ended!\n");
}

int main()
{
    GameLoop();
    return 0;
}
