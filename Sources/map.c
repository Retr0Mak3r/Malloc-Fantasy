#include "../Headers/prototype.h"

Map map;

void initMaps(void)
{
// Charge l'image du fond (background)
    map.background = loadImage("graphics/background_test.png");
}


SDL_Texture *getBackground(void)
{
    return map.background;
}


void cleanMaps(void)
{
// Libère la texture du background
    if (map.background != NULL)
    {
        SDL_DestroyTexture(map.background);
        map.background = NULL;
    }
}
void drawPlayer(void)
{
/* Gestion du timer */
// Si notre timer (un compte à rebours en fait) arrive à zéro
    if (player.frameTimer <= 0)
    {
//On le réinitialise
        player.frameTimer = TIME_BETWEEN_2_FRAMES_PLAYER;

//Et on incrémente notre variable qui compte les frames de 1 pour passer à la suivante
        player.frameNumber++;

//Mais si on dépasse la frame max, il faut revenir à la première :
        if (player.frameNumber >= player.frameMax)
            player.frameNumber = 0;

    }
//Sinon, on décrémente notre timer
    else
        player.frameTimer--;


//Ensuite, on peut passer la main à notre fonction

/* Rectangle de destination à dessiner */
    SDL_Rect dest;

// On soustrait des coordonnées de notre héros, ceux du début de la map, pour qu'il colle
//au scrolling :
    dest.x = player.x - getStartX();
    dest.y = player.y - getStartY();
    dest.w = player.w;
    dest.h = player.h;

/* Rectangle source */
    SDL_Rect src;

//Pour connaître le X de la bonne frame à dessiner, il suffit de multiplier
//la largeur du sprite par le numéro de la frame à afficher -> 0 = 0; 1 = 40; 2 = 80...
    src.x = player.frameNumber * player.w;
    src.w = player.w;
    src.h = player.h;

//On calcule le Y de la bonne frame à dessiner, selon la valeur de l'état du héros :
//Aucun Mouvement (Idle) = 0, marche (walk) = 1, etc...
//Tout cela en accord avec notre spritesheet, of course ;)
    src.y = player.etat * player.h;

//Gestion du flip (retournement de l'image selon que le sprite regarde à droite ou à gauche
    if (player.direction == LEFT)
        SDL_RenderCopyEx(getrenderer(), playerSpriteSheet, &src, &dest, 0, 0, SDL_FLIP_HORIZONTAL);
    else
        SDL_RenderCopyEx(getrenderer(), playerSpriteSheet, &src, &dest, 0, 0, SDL_FLIP_NONE);

}