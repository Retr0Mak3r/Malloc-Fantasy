/* ******************************************************
 *                   defines file                       *
 ****************************************************** */



// ********** includes **********

#include <stdio.h>
#include <mysql.h>
#include <SDL.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

// ********** Window Size **********

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

// ********** Character Spec *******
// Sprite height and width
#define PLAYER_WIDTH 15
#define PLAYER_HEIGHT 15

// Animation
#define IDLE 0
#define WALK 1
#define R_CHARACTER 2
#define L_CHARACTER 3
#define DEAD 4

#define RIGHT 1
#define LEFT 2