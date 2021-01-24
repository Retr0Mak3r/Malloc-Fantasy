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

#include <stdio.h>
#include <mysql.h>
#include <SDL.h>
#include <conio.h>

int main(int argc,char** argv){
    SDL_Init(SDL_VIDEO_DRIVER_WINDOWS);
MYSQL *connexion = mysql_init(NULL);
    if(connexion== NULL){
    printf("failed...");
    }   else{
    printf("success");
    }
    SDL_Quit();
    return 0;
}