/* ******************************************************
 *                   struct of game                     *
 ****************************************************** */

#include "structs.h"

/* all fonctions */

extern void cleanstart(void);
extern void cleanup(void);
extern void delay(unsigned int frameLimit);
extern void drawGame(void);
extern void drawImage(SDL_Texture *, int, int);
extern void drawMap(int);
extern void gestionInputs(Input *input);
extern SDL_Texture *getBackground(void);
extern void getInput(Input *input);
extern SDL_Renderer *getrenderer(void);
extern void init(char *);
extern void initMaps(void);
extern void iniStart(void);
extern void initMenu(void);
extern void loadGame(void);
extern void fText(SDL_Color color_text, int x, int y, const char* text);
extern SDL_Texture *loadImage(char *name);
//extern void initMenu(void);