#include "../Headers/prototype.h"
/////////////////////////////////////PLAYER////////////////////////////////////////
player_stat init_stat(int choice){
    player_stat *player = malloc(sizeof(player));
    switch (choice) {

        case 1:
            player->life = 300;
            player->attack = 50;
            player->defense = 100;
            player->mana = 25;
            player->magic = 50;
        case 2:
            player->life = 300;
            player->attack = 25;
            player->defense = 25;
            player->mana = 300;
            player->magic = 120;
    }

    return *player;
}

/////////////////////////////////////ENEMY////////////////////////////////////////

ennemy_stat init_ennemy_stat(){
    ennemy_stat *ennemy = malloc(sizeof(ennemy));
    ennemy->life = 300;
    ennemy->attack = 75;
    ennemy->defense = 50;
    return *ennemy;
}
