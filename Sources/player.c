#include "../Headers/defs.h"
#include "../Headers/prototype.h"
extern FILE* backlog;
extern char *pseudoname;
int class = 0;
extern int state;
extern int update;
player_stat player;
extern SDL_Renderer *renderer;
//extern char *characterimg;


int createPlayer()
{
    pseudoname = malloc(sizeof(char)*11);
    char *tmp = malloc(sizeof(char)*200);
    int lenght;

    if(pseudoname == NULL)
    {
        fputs("\n echec malloc pseudonames", backlog);
    }
    printf("saisie ton pseudo >=10 caractere\n");
    scanf("%s", tmp);
    lenght=strlen(tmp);
    while (lenght>10)
    {
        printf("il doit faire moins de 10 caractéres\n");
        scanf("%s", tmp);
        lenght=strlen(tmp);
    }

    strcpy(pseudoname, tmp);
    free(tmp);
    printf("le nom est %s \n", pseudoname);
    addPlayer(pseudoname);

    //----------- perso -----------
    printf("selectionner votre personnage guerrier(1) ou mage(2) \n");
    scanf("%d", &class);

    while(class !=1 && class !=2)
    {
        printf("selectionner votre personnage guerrier(1) ou mage(2) \n");
        scanf("%d", &class);
    }
    if(class==1)
   {
       printf("Vous avez choisi guerrier ? Ses stats : \n attaque : 50 \n defense : 100 \n mana : 25");
   }else{
       printf("Vous avez choisi mage ? Ses stats : \n attaque : 25 \n defense : 25 \n mana : 300");
   }

    player = init_stat(class);
    init_ennemy_stat();
    //printf("\nVos statistiques : vie %d \n attaque : %d \n défense : %d \n mana : %d \n degat magique : %d \n ", player.life,player.attack,player.defense,player.mana,player.magic);

    state=4;
    update=3;
}