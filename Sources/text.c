#include "Headers/prototype.h"

SDL_Window *ecran = NULL;
SDL_Surface *texte = NULL; //*fond = NULL;
SDL_Rect position;
TTF_Font *police = NULL;
SDL_Color couleurNoire = {0, 0, 0};
int continuer = 1;

SDL_Init(SDL_INIT_VIDEO);
TTF_Init();

ecran = SDL_CreateWindow("test", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
SDL_Surface *pSurf = SDL_GetWindowSurface(ecran);

//police
police = TTF_OpenFont("../bin/fonts/arial.ttf", 65);
texte = TTF_RenderText_Blended(police, "Salut", couleurNoire);

//aft
SDL_FillRect(pSurf, NULL, SDL_MapRGB(pSurf->format, 255, 255, 255));
position.x = 0;
position.y = 0;
//        SDL_BlitSurface(fond, NULL, pSurf, &position); /* Blit du fond */
//        position.x = 60;
//        position.y = 370;
SDL_BlitSurface(texte, NULL, pSurf, &position); /* Blit du texte */
SDL_UpdateWindowSurface(ecran);