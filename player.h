#ifndef BB_PLAYER_H
#define BB_PLAYER_H

typedef struct Player
{
    char name[64];
    int health;
    int damage;
    int armor;
} Player;

void initPlayer(Player *player);
void set_player_name(Player *player, char *name);
void print_player_name(Player *player);

#endif // BB_PLAYER_H
