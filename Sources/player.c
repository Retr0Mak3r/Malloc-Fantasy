#include "../Headers/defs.h"
#include "../Headers/prototype.h"
extern char *pseudoname;
int class = 0;
extern int state;
extern int update;
player_stat player;

int character_choice(){
    int choice = 0;
    printf("Quel personnage voulez-vous jouer :\n1 : guerrier\n2 :  mage\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Vous avez choisi guerrier ? Ses stats : \n attaque : 50 \n defense : 100 \n mana : 25");
            break;
        case 2:
            printf("Vous avez choisi mage ? Ses stats : \n attaque : 25 \n defense : 25 \n mana : 300");
            break;
        default:
            printf("Choix impossible \n");
            character_choice();
            break;
    }
    return choice;
}

int createPlayer()
{
    printf("creation du joueurs \n");
    pseudoname = malloc(sizeof(char)*11);
    char *tmp = malloc(sizeof(char)*200);
    int lenght;
    if(pseudoname == NULL)
    {
        printf("ca a foirée..\n");
    }
    printf("saisit ton pseudo >=10 caractere\n");
    scanf("%s", tmp);
    lenght=strlen(tmp);
    while (lenght>10)
    {
        printf("on a dit moins de 10 \n");
        scanf("%s", tmp);
        lenght=strlen(tmp);
    }

    strcpy(pseudoname, tmp);
    free(tmp);
    printf("le nom est %s \n", pseudoname);


    class = character_choice();
    player = init_stat(class);
    init_ennemy_stat();

    printf("\ntes stats : vie %d \n attaque : %d \n défense : %d \n mana : %d \n degat magique : %d \n ", player.life,player.attack,player.defense,player.mana,player.magic);


    addPlayer(pseudoname);

    state=4;
    update=3;
    printf("la valeur de update est %d \n", update);
}