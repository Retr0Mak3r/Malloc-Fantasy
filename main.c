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
#include "Headers/defs.h"
int state;
int update;
int main(int argc,char *argv[])
{
    SDL_Event touche;
    bool isRunning = true;
    state = 1;
    update =1;

    /* ***************************** *
     * =========== State =========== *
     * 1- Start Screen               *
     * 2- Menu                       *
     * 3- Creation character         *
     * 4- Game                       *
     * 5- Score                      *
     * 6- Quit                       *
     * ***************************** */

    init();
    while(isRunning==true)
    {
        drawGame(state);


        SDL_WaitEvent(&touche);

        if (state==3 && update==2)
        {
            Mix_HaltMusic();
            update=1;
            createPlayer();
        }
        if (state==4 && update==3)
        {
            update=1;

            updateScorePlayer(1947);
            state = 1;

        }

        if (state==6)
        {
            closeGame();
        }
        switch (touche.type)
        {
            case SDL_KEYDOWN:
                switch (touche.key.keysym.sym)
                {
                    case SDLK_RETURN:
                        if (state==1)
                        {
                            state=2;
                        } break;

                    case SDLK_1:
                        if (state==2)
                        {
                            state=3;
                            update=2;
                        }
                        if (state==5)
                        {
                            state=2;
                            update=1;
                        } break;
                    case SDLK_2:
                        if (state==2)
                        {
                            state=5;
                            update=6;
                        } break;
                    case SDLK_3:
                        if (state==2)
                        {
                            state=6;
                        } break;
                    case SDLK_ESCAPE:
                        isRunning = false;
                        state=6;
                        break;
                }break;

        }
    }

    exit(0);
}