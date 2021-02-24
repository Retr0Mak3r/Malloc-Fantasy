#include "../Headers/prototype.h"




int AI(){
    int random = rand()%100;
    int choice = 0;
    if (random >= 0 || random < 74){
    // l'ennemi attaque
    choice = 1;
    }
    if (random >= 75 || random < 101){
    // l'ennemi defend
    choice = 2;
    }
    return choice;
}