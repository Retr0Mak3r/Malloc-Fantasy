#include "../Headers/prototype.h"

void battle(){
    char *background_battle;
    background_battle = "../bin/graphics/map_battle.bmp";
    setBackground(background_battle);
   // SDL_Color color = {125, 125, 125};
   // addText(60,color,"AH ! un ennemi attaque ! Que voulez-vous faire ? ",500,500);
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
    int temp = 0;
    int mana = 0;
    SDL_Color color = {255, 255, 255};
    player_stat player;
    ennemy_stat *ennemy = malloc(sizeof(ennemy));
//    addText(15,color,"Que voulez-vous faire ? ",500,990);
    printf("\nQue voulez-vous faire ? ");
    scanf("%d",&action);
    switch (action) {
        case 1:
            printf("\nVous avez attaqué");
            if (ennemy_choice == 2){
                temp = player.attack - ennemy->defense;
                ennemy->life -= temp;
            }
            break;
        case 2:
         printf("\nVous avez défendu");
         break;
        case 3:
            printf("\nvous avez utilise de la magie");
            if (ennemy_choice == 2 ){
                temp = player.magic - ennemy->defense;
                ennemy->life -= temp;
            }
            break;
    }

    return action;
}

int  ennemy_turn(int player_choice){
    int action = AI();
    int temp = 0;
    player_stat *player = malloc(sizeof(player));
    ennemy_stat ennemy;
    if (action == 1){
        printf("l\' ennemi attaque");
        if (player_choice == 2){
            temp = ennemy.attack - player->defense;
            player->life -= temp;
        }
        else{
            player->life -= ennemy.attack;
        }
    }
    return action;
}