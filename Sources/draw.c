#include "../Headers/defs.h"
extern SDL_Renderer *renderer;
extern SDL_Texture *texture;
extern SDL_Surface *surface;
extern SDL_Surface *texte;
extern SDL_Surface *image;
extern TTF_Font *police;


void drawGame(state){
    if(state==1)
    {
        // background
        image = SDL_LoadBMP("../bin/graphics/title_2.bmp");
        texture = SDL_CreateTextureFromSurface(renderer, image);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);

        //texte
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

