#include "../Headers/prototype.h"

Map background;

void iniStart(void)
{
// Charge l'image du fond (background)
    background.background = loadImage("graphics/title.jpg");
    fText((SDL_Color){0,0,0},10,10,"hello");
    printf("Start to play or echap to quit \n");

}


SDL_Texture *getBackground(void)
{
    return background.background;
}


void cleanstart(void)
{
// Libère la texture du background
    if (background.background != NULL)
    {
        SDL_DestroyTexture(background.background);
        background.background = NULL;
    }
}

void initMenu(void)
{
    // Charge l'image du menu
    background.background = loadImage("graphics/menu.png");
    printf("****** Menu ****** \n");
    printf("* 1- New Game    * \n");
    printf("* 2- Scores      * \n");
    printf("* 3- Page Start  * \n");
    printf("****************** \n");
}

