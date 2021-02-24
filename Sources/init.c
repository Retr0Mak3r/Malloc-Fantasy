#include "../Headers/defs.h"
SDL_Window *window;
SDL_Renderer *renderer;
SDL_Texture *texture;
SDL_Surface *surface, *image, *texte;
TTF_Font *police;
MYSQL *connexion;
char *pseudoname;
int statut;


void init(){
    window = NULL;
    renderer = NULL;
    texture = NULL;
    surface = NULL;
    texte = NULL;
    image = NULL;
    statut = EXIT_FAILURE;
    police = NULL;
    pseudoname = NULL;

    if(0 != SDL_Init(SDL_INIT_VIDEO))
    {
        printf("1- echec de l initialisation \n");
        fprintf(stderr, "Erreur SDL_Init : %s", SDL_GetError());
    }   else{
        printf("1- Initialisation ok \n");
    }

    window = SDL_CreateWindow("Malloc-Fantasy", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              1280, 1024, SDL_WINDOW_SHOWN);
    if(NULL == window)
    {
        printf("2- echec de la creation de fenetre \n");
        fprintf(stderr, "Erreur SDL_CreateWindow : %s", SDL_GetError());
    }   else{
        printf("2- Creation de la fenetre ok \n");
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(NULL == renderer)
    {
        printf("3- echec de la creation du cadre (renderer) \n");
        fprintf(stderr, "Erreur SDL_CreateRenderer : %s", SDL_GetError());
    }   else{
        printf("3- Creation du cadre (renderer) ok \n");
    }

    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET, 500, 500);
    if(NULL == texture)
    {
        printf("4- echec de la creation de la texture (renderer) \n");
        fprintf(stderr, "Erreur SDL_CreateTexture : %s", SDL_GetError());
    }   else{
        printf("4- Creation de la texture ok \n");
    }
    surface = SDL_CreateRGBSurface(0, 1280, 1024, 32, 0, 0, 0, 0);
    if(NULL == surface)
    {
        printf("5- echec de la creation de la surface (renderer) \n");
        fprintf(stderr, "Erreur SDL_CreateRGBSurface : %s", SDL_GetError());
    }   else{
        printf("Creation de la surface (renderer) ok \n");
    }
    TTF_Init();
    if(TTF_Init() == -1)
    {
        printf("TTF_init echec \n");
        fprintf(stderr, "Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
    }   else{
        printf("6- TTF_init ok \n");
    }

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
        printf( "Error mysql: %s\n",mysql_error(connexion));
    }   else{
        printf("connexion a la base de donnees -> success \n");
    }
}

void addPlayer(char *pseudo){
    char *request = malloc(sizeof(char)*255);

    sprintf(request, "INSERT INTO players(pseudo) VALUES ('%s');",pseudo);
    printf("%s\n",request);
    mysql_query(connexion, request);
    free(request);
}

void updateScorePlayer(int score){
    char *request = malloc(sizeof(char)*255);
    sprintf(request, "UPDATE players SET score = '%d' ORDER BY id desc limit 1;",score);
    printf("%s\n",request);
    mysql_query(connexion, request);
    free(request);
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
    printf("Fermeture du jeu ok\n");
    SDL_FreeSurface(surface);
    SDL_FreeSurface(image);
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_CloseFont(police);
    TTF_Quit();
    SDL_Quit();
    return statut;
}
