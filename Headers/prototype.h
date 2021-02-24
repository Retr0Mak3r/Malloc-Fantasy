/* ******************************************************
 *                   struct of game                     *
 ****************************************************** */

#include "structs.h"

#include <SDL.h>

/* all fonctions */

extern void init();
extern int closeGame();
extern void drawGame(int);
extern int createPlayer();
extern void setBackground(char*);
extern void battle();
extern void addText(int size, SDL_Color color, char *text, int x, int y);
extern void addPlayer(char*);
extern void updateScorePlayer(int);
extern void set_background_battle(char *);
extern void set_character();
extern char*** fetchScorePlayer();
extern int player_turn (int);
extern player_stat init_stat(int);
extern ennemy_stat init_ennemy_stat();
extern int AI();
extern int ennemy_turn(int);







