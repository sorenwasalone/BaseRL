#include <ncurses.h>
#define MAP_MAX 80

//GLOBAL VARIABLES
int imap[][MAP_MAX][MAP_MAX]={0}; // Item Map -> stores item data for each block (items,y,x)
int dmap[][MAP_MAX][MAP_MAX]={0}; // Data Map -> determines how the block functions (data,y,x)
char vmap[][]={0}; // Visual Map -> shows the block (x,y)

int px = 0;
int py = 0;