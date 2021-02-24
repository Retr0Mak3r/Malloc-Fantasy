#include "../Headers/defs.h"
FILE* backlog;
SDL_Window *window;
SDL_Renderer *renderer;
SDL_Texture *texture;
SDL_Surface *surface, *image, *texte;
Mix_Music *music;
TTF_Font *police;
MYSQL *connexion;
char *pseudoname;
int statut;


void init(){
    backlog=NULL;
    window = NULL;
    renderer = NULL;
    texture = NULL;
    surface = NULL;
    texte = NULL;
    image = NULL;
    statut = EXIT_FAILURE;
    police = NULL;
    pseudoname = NULL;

    backlog = fopen("backlog.txt","a+");
    fputs("\n ============== NEW GAME ==============", backlog);

    if(0 != SDL_Init(SDL_INIT_VIDEO))
    {
        fprintf(backlog, "Erreur SDL_Init : %s", SDL_GetError());
    }   else{
        fputs("\n 1- Success / Initialisation SDL + SDL_INIT_VIDEO \n", backlog);
    }

    window = SDL_CreateWindow("Malloc-Fantasy", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              1280, 1024, SDL_WINDOW_SHOWN);
    if(NULL == window)
    {
        fprintf(backlog, "Erreur SDL_CreateWindow : %s", SDL_GetError());
    }   else{
        fputs("\n 2- Success / Creation de la fenetre ok", backlog);
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(NULL == renderer)
    {
        fprintf(backlog, "Erreur SDL_CreateRenderer : %s", SDL_GetError());
    }   else{
        fputs("\n 3- Success / Creation du cadre (renderer) ok", backlog);
    }

    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET, 500, 500);
    if(NULL == texture)
    {
        fprintf(backlog, "Erreur SDL_CreateTexture : %s", SDL_GetError());
    }   else{
        fputs("\n 4- Success / Creation de la texture ok", backlog);
    }
    surface = SDL_CreateRGBSurface(0, 1280, 1024, 32, 0, 0, 0, 0);
    if(NULL == surface)
    {
        fprintf(backlog, "Erreur SDL_CreateRGBSurface : %s", SDL_GetError());
    }   else{
        fputs("\n 5- Success / Creation de la surface (renderer) ok", backlog);
    }
    TTF_Init();
    if(TTF_Init() == -1)
    {
        fprintf(backlog, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
    }   else{
        fputs("\n 6- Success / TTF_init ok", backlog);
    }
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) //Initialisation de l'API Mixer
    {
        fprintf(backlog,"%s", Mix_GetError());
    }   else{
        fputs("\n 7- Success / Ini Audio ok", backlog);
    }

    music = Mix_LoadMUS("../bin/Sons/ffx.mp3");
    Mix_PlayMusic(music, 1);
    Mix_VolumeMusic(MIX_MAX_VOLUME / 10);
    

    // ---------------------- initialisation de mysql ----------------------

    char *host = "localhost";
    char *user = "root";
    char *password = "root";
    char *dbname = "malloc_fantasy";
    unsigned int port = 0;
    char *unix_socket = NULL;
    unsigned int flag = 0;

    connexion = mysql_init(NULL);

    if(!(mysql_real_connect(connexion,host,user,password,dbname,port,unix_socket,flag))){
        fprintf(backlog, "\n Error mysql: %s\n",mysql_error(connexion));
    }   else{
        fputs("\n 8- Success / connexion a la base de donnees -> success", backlog);
    }
}

void addPlayer(char *pseudo){
    char *request = malloc(sizeof(char)*255);

    sprintf(request, "INSERT INTO players(pseudo) VALUES ('%s');",pseudo);
    fprintf(backlog,"%s \n",request);
    mysql_query(connexion, request);
    free(request);
}

void updateScorePlayer(int score){
    char *request = malloc(sizeof(char)*255);
    sprintf(request, "UPDATE players SET score = '%d' ORDER BY id desc limit 1;",score);
    fprintf(backlog,"%s \n",request);
    mysql_query(connexion, request);
    free(request);
}

char*** fetchScorePlayer(){
    MYSQL_RES *allData;
    MYSQL_ROW rowScore;
    char ***returnScore;
    char *request = malloc(sizeof(char)*255);
    returnScore=malloc(sizeof(char**)*10);
    for(int j=0;j<10;j++)
    {
        returnScore[j]=malloc(sizeof(char*)*2);
        for(int k=0;k<2;k++){
            returnScore[j][k]=malloc(sizeof(char)*11);
        }
    }

    sprintf(request, "select pseudo, score from players order by score desc limit 10;");
    fprintf(backlog,"\n %s",request);
    mysql_query(connexion, request);

    allData=mysql_store_result(connexion);
    for(int i=0; i<10;i++)
    {
        rowScore = mysql_fetch_row(allData);
        strcpy(returnScore[i][0],rowScore[0]);
        strcpy(returnScore[i][1],rowScore[1]);
    }

    free(request);
    return returnScore;
}

void setBackground(char *imgpath){
    SDL_RenderClear(renderer);
    image = SDL_LoadBMP(imgpath);
    texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void addText(int size, SDL_Color color, char *text, int x, int y){
    SDL_Rect position;
    police = TTF_OpenFont("../bin/fonts/arial.ttf", size);
    texte = TTF_RenderText_Blended(police, text, color);
    position.x=x;
    position.y=y;
    SDL_BlitSurface(texte,NULL,surface,&position);
    texture= SDL_CreateTextureFromSurface(renderer,texte);
    SDL_RenderCopy(renderer, texture, NULL, &position);
    SDL_RenderPresent(renderer);
}


    int statut = EXIT_SUCCESS;
    int closeGame(){
    free(pseudoname);
    mysql_close(connexion);
    printf("Fermeture du jeu ok\n");
    SDL_FreeSurface(surface);
    SDL_FreeSurface(image);
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_CloseFont(police);
    Mix_CloseAudio();
    Mix_FreeMusic(music);
    TTF_Quit();
    fclose(backlog);
    SDL_Quit();
    fputs("\n normal close", backlog);
    return statut;
}
