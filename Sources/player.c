#include "../Headers/defs.h"
#include "../Headers/prototype.h"
extern char *pseudoname;
int class;
extern int state;
extern int update;

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

    printf("choisissez votre classe \n");
    printf("tapez 1 pour magicien \n");
    printf("tapez 2 pour epeiste \n");
    class=0;
    while(class!=1 && class!=2){
        scanf("%d", &class);
    }

    printf("ta class est %d \n", class);

    addPlayer(pseudoname);

    state=4;
    update=3;
    printf("la valeur de update est %d \n", update);
}