/* ******************************************************
 *                   struct of game                     *
 ****************************************************** */

#include "structs.h"

/* all fonctions */

extern void cleanup(void);
extern void delay(unsigned int frameLimit);
extern void drawGame(void);
extern void gestionInputs(Input *input);
extern void getInput(Input *input);
extern SDL_Renderer *getrenderer(void);
extern void init(char *);
 extern void music(void);