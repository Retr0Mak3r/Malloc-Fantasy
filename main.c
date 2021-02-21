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
    bool isRunning;
    int State;


    SDL_Event event;

    // Initialisation de la SDL
    init("Malloc Fantasy -v1-");
    loadGame();


    // cleanup at the end
    atexit(cleanup);

    isRunning=true;
    State=1;

    // gameLoop
    while(isRunning==true)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                isRunning = false;
                break;

            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                    case SDLK_ESCAPE:
                        isRunning=false;
                }
                break;
        }

        //-------- Start --------
        if(State==1){
            iniStart();

            switch(event.type)
            {
                case SDL_KEYDOWN:
                    switch (event.key.keysym.sym) {
                        case SDLK_RETURN:
                            State=2;
                    }
                    break;
            }
        }


        //------- Menu --------
        if(State==2){
            //appel background menu
            initMenu();


            switch(event.type)
            {
                case SDL_KEYDOWN:
                    switch (event.key.keysym.sym) {
                        case SDLK_1:
                            State=3;
                            break;

                        case SDLK_2:
                            State=4;
                            break;

                        case SDLK_3:
                            State=1;
                            break;
                    }
                    break;
            }

        }

        //------- New Game -------
        if(State==3){
            printf("Creation du personnage \n");
        }

        //------- Score -------
        if(State==4){
            printf("Consultation des scores \n");
        }

        // --------------- ne pas toucher -------------
        //keyboard input
        gestionInputs(&input);

        //renderer
        drawGame();

        // Gestion des 60 fps (1000ms/60 = 16.6 -> 16
        delay(frameLimit);
        frameLimit = SDL_GetTicks() + 16;
    }




    // gestion sql on ne s en occupe pas pour le moment xD
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