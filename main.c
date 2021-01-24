// Created by Nirina Gallot on 23/01/2021.
//joined by Michael TALLA on 23/01/2021
// Malloc-Fantasy
#include <stdio.h>
#include <mysql.h>
#include <SDL.h>

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