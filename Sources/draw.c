#include "../Headers/defs.h"
extern SDL_Renderer *renderer;
extern SDL_Texture *texture;
extern SDL_Surface *surface;
extern SDL_Surface *texte;
extern SDL_Surface *image;
extern TTF_Font *police;


void drawGame(state){
    printf("draw game %d \n", state);
    /*
    //------------- couleur du renderer --------------
    if(0 != SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255))
    {
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor : %s", SDL_GetError());
    }

    if(0 != SDL_RenderClear(renderer))
    {
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor : %s", SDL_GetError());
    }

    SDL_RenderPresent(renderer);
    SDL_Delay(500);
    

    if(0 != SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255))
    {
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor : %s", SDL_GetError());
    }

    if(0 != SDL_RenderClear(renderer))
    {
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor : %s", SDL_GetError());
    }
    SDL_RenderPresent(renderer);
    */

    //surface = SDL_LoadBMP("../bin/graphics/title_2.bmp");
    if(state==1)
    {

        image = SDL_LoadBMP("../bin/graphics/title_2.bmp");
        texture = SDL_CreateTextureFromSurface(renderer, image);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);



        police = TTF_OpenFont("../bin/fonts/arial.ttf", 65);
        SDL_Color colorBlack = {0, 0, 0};
        texte = TTF_RenderText_Blended(police, "mon texte", colorBlack);



    }
    if(state==2)
    {
        image = SDL_LoadBMP("../bin/graphics/Menu.bmp");
        texture = SDL_CreateTextureFromSurface(renderer, image);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }

}

