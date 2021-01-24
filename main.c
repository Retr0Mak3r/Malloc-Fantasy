/* *****************************************
 *                Project_C                *
 *       And now, it's time to C code !    *
 * Game Name : Malloc_Fantasy              *
 * Player 1  : GALLOT Nirina               *
 * Player 2  : TALLA Michael               *
 * Groupe 2                                *
 * Classe 2A3                              *
 *                                         *
 *        Created the 10 December 2020     *
 ***************************************** */


#include "Headers/prototype.h"

/* Variables uses during the game */
Input input;

int main(int argc,char** argv)
{
    unsigned int frameLimit = SDL_GetTicks() + 16;
    int go;

    // Initialisation de la SDL
    init("Malloc Fantasy -v1-");

    // cleanup at the end
    atexit(cleanup);

    go=1;

    // gameLoop
    while(go==1)
    {
        //keyboard input
        gestionInputs(&input);

        //renderer
        drawGame();

        // Gestion des 60 fps (1000ms/60 = 16.6 -> 16
        delay(frameLimit);
        frameLimit = SDL_GetTicks() + 16;
    }

    MYSQL *connexion = mysql_init(NULL);
    if(connexion== NULL)
    {
        printf("failed...");
    }else
    {
        printf("success");
    }
    exit(0);
}