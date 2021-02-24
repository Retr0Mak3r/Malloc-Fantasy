#include "../Headers/defs.h"
#include "../Headers/prototype.h"
extern SDL_Renderer *renderer;
extern SDL_Texture *texture;
extern SDL_Surface *surface;
extern SDL_Surface *texte;
extern SDL_Surface *image;
extern TTF_Font *police;




void drawGame(int state){
    char *imgpath;
    char *text;
    if(state==1)
    {
        imgpath ="../bin/graphics/title_2.bmp";
        setBackground(imgpath);

        SDL_Color color = {0, 0, 0};
        SDL_Color color2 = {100, 100, 100};
        text="Appuyez sur entrer";
        addText(50,color, text, 440, 850);

        text="Groupe 2 TALLA GALLOT 2A3 24/02/2021 ";
        addText(15,color2, text, 500, 990);
    }
    if(state==2)
    {
        imgpath ="../bin/graphics/Menu.bmp";
        setBackground(imgpath);

        SDL_Color color = {255, 255, 255};
        SDL_Color color2 = {128, 128, 128};

        text="Pressez 1 -> Lancement du jeu";
        addText(25,color2, text, 100, 350);

        text="Pressez 2 -> afficher les  scores";
        addText(25,color2, text, 100, 450);

        text="Pressez 3 -> Quitter le jeu";
        addText(25,color2, text, 100, 550);


        text="Groupe 2 TALLA GALLOT 2A3 24/02/2021 ";
        addText(15,color, text, 500, 990);

    }
}



