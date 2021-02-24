#include "../Headers/prototype.h"

void battle(){
    player_stat player;
    ennemy_stat ennemy;
    int player_action = 0;
    int ennemy_action = 0;
    while (player.life > 0 || ennemy.life > 0){
        player_action = player_turn(ennemy_action);
        ennemy_action = ennemy_turn(player_action);
    }
}

int player_turn(int ennemy_choice){
    int action = 0;
    player_stat player;
    ennemy_stat *ennemy = malloc(sizeof(ennemy));


    return 0;
}

int  ennemy_turn(int player_choice){
    return 0;
}