#include "../Headers/prototype.h"

GameObject player;
SDL_Texture *playerSpriteSheet;


//Renvoie le GameObject player (héros)
GameObject *getPlayer(void)
{
    return &player;
}


//Renvoie les coordonnées x du héros
int getPlayerx(void)
{
    return player.x;
}


//Renvoie les coordonnées y du héros
int getPlayery(void)
{
    return player.y;
}


//Change la valeur des coordonnées x du héros
void setPlayerx(int valeur)
{
    player.x = valeur;
}


//Change la valeur des coordonnées y du héros
void setPlayery(int valeur)
{
    player.y = valeur;
}

//Charge la spritesheet (= feuille de sprites) de notre héros
//au début du jeu
void initPlayerSprites(void)
{
    playerSpriteSheet = loadImage("graphics/sprite_warrior.png");
}


//Libère le sprite du héros à la fin du jeu
void cleanPlayer(void)
{
    if (playerSpriteSheet != NULL)
    {
        SDL_DestroyTexture(playerSpriteSheet);
        playerSpriteSheet = NULL;
    }
}
void initializePlayer(void)
{

//PV à 3
    player.life = 300;

//Timer d'invincibilité à 0
    player.invincibleTimer = 0;

//Indique l'état et la direction de notre héros
    player.direction = RIGHT;
    player.etat = IDLE;

//Indique le numéro de la frame où commencer
    player.frameNumber = 0;

//...la valeur de son chrono ou timer
    player.frameTimer = TIME_BETWEEN_2_FRAMES_PLAYER;

//... et son nombre de frames max (8 pour l'anim' IDLE
// = ne fait rien)
    player.frameMax = 8;

    player.x = getBeginX();
    player.y = getBeginY();

/* Hauteur et largeur de notre héros */
    player.w = PLAYER_WIDTH;
    player.h = PLAYER_HEIGTH;

//Variables nécessaires au fonctionnement de la gestion des collisions
    player.timerMort = 0;
    player.onGround = 0;

}
void drawPlayer(void)
{
/* Gestion du timer */
// Si notre timer (un compte à rebours en fait) arrive à zéro
    if (player.frameTimer <= 0)
    {
//On le réinitialise
        player.frameTimer = TIME_BETWEEN_2_FRAMES_PLAYER;

//Et on incrémente notre variable qui compte les frames de 1 pour passer à la suivante
        player.frameNumber++;

//Mais si on dépasse la frame max, il faut revenir à la première :
        if (player.frameNumber >= player.frameMax)
            player.frameNumber = 0;

    }
//Sinon, on décrémente notre timer
    else
        player.frameTimer--;


//Ensuite, on peut passer la main à notre fonction

/* Rectangle de destination à dessiner */
    SDL_Rect dest;

// On soustrait des coordonnées de notre héros, ceux du début de la map, pour qu'il colle
//au scrolling :
    dest.x = player.x - getStartX();
    dest.y = player.y - getStartY();
    dest.w = player.w;
    dest.h = player.h;

/* Rectangle source */
    SDL_Rect src;

//Pour connaître le X de la bonne frame à dessiner, il suffit de multiplier
//la largeur du sprite par le numéro de la frame à afficher -> 0 = 0; 1 = 40; 2 = 80...
    src.x = player.frameNumber * player.w;
    src.w = player.w;
    src.h = player.h;

//On calcule le Y de la bonne frame à dessiner, selon la valeur de l'état du héros :
//Aucun Mouvement (Idle) = 0, marche (walk) = 1, etc...
//Tout cela en accord avec notre spritesheet, of course ;)
    src.y = player.etat * player.h;

//Gestion du flip (retournement de l'image selon que le sprite regarde à droite ou à gauche
    if (player.direction == LEFT)
        SDL_RenderCopyEx(getrenderer(), playerSpriteSheet, &src, &dest, 0, 0, SDL_FLIP_HORIZONTAL);
    else
        SDL_RenderCopyEx(getrenderer(), playerSpriteSheet, &src, &dest, 0, 0, SDL_FLIP_NONE);

}