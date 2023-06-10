#include "player.h"
#include <stdio.h>
#include <string.h>

#ifndef BB_PLAYER
#define BB_PLAYER

void set_player_name(Player *player, char *name)
{
    // Set the player name to the name of the input pointer.
    strcpy(player->name, name);
}

void print_player_name(Player *player)
{
    // Print the player name.
    printf("Player name: %s\n", player->name);
}

void initPlayer(Player *player)
{
    set_player_name(player, "John Doe");
    player->health = 100;
    player->damage = 10;
    player->armor = 1;
}

#endif // BB_PLAYER
