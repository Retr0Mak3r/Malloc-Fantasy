#include "../Headers/prototype.h"
int Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize);
void music(){

    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) //Initialisation de l'API Mixer
    {
        printf("%s", Mix_GetError());
    }
    Mix_Music *musique; //Création du pointeur de type Mix_Music
    musique = Mix_LoadMUS("No_More_Music.mp3"); //Chargement de la musique
    Mix_PlayMusic(musique, -1); //Jouer infiniment la musique
}
