/* ******************************************************
 *                   struct of game                     *
 ****************************************************** */

#include "structs.h"

/* all fonctions */

extern void cleanMaps(void);
extern void cleanup(void);
extern void cleanPlayer(void);
extern void delay(unsigned int frameLimit);
extern void drawGame(void);
extern void drawImage(SDL_Texture *, int, int);
extern void drawMap(int);
extern void drawPlayer(void);
extern void gestionInputs(Input *input);
extern SDL_Texture *getBackground(void);
extern void getInput(Input *input);
extern GameObject *getPlayer(void);
extern int getPlayerDirection(void);
extern int getPlayerx(void);
extern int getPlayery(void);
extern SDL_Renderer *getrenderer(void);
extern void init(char *);
extern void initMaps(void);
extern void initPlayerSprites(void);
extern void loadGame(void);
extern SDL_Texture *loadImage(char *name);