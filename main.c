#include <ncurses.h>
#include <stdlib.h>
#define MAP_MAX 80
#define DMAP_AMAX 3 // Number of catigories dmap has

//GLOBAL VARIABLES
int imap[2][MAP_MAX][MAP_MAX]={0}; // Item Map -> stores item data for each block (items,y,x)
int dmap[DMAP_AMAX][MAP_MAX][MAP_MAX]={0}; // Data Map -> determines how the block functions (data,y,x)
char vmap[MAP_MAX][MAP_MAX]={0}; // Visual Map -> shows the block (x,y)
char ch;
int px = 0;
int py = 0;

void d_test_imap(){
	for(int i = 0; i < MAP_MAX; i++){
		for(int ii = 0; ii < MAP_MAX; ii++){
			imap[0][i][ii]=0;
		}
	}
}

void p_test_imap(){
	for(int i = 0; i < MAP_MAX; i++){
		for(int ii = 0; ii < MAP_MAX; ii++){
			imap[0][i][ii]=0;
			mvprintw(i,ii,"%d",imap[0][i][ii]);
		}
	}
}

int chk_dmap (int n, char pos){
	if (n >= DMAP_AMAX)
		return EXIT_FAILURE;
	if (pos != 'a' && pos != 'd' && pos != 'w' && pos != 's')
		return EXIT_FAILURE;
	int x = px;
	int y = py;
	switch (pos){
	case 'w':
		y--;
		if (py <= 0)
			return EXIT_FAILURE;
		break;
	case 's':
		y++;
		if (py >= 79)
			return EXIT_FAILURE;
		break;
	case 'a':
		x--;
		if (px <= 0)
			return EXIT_FAILURE;
		break;
	case 'd':
		x++;
		if (px >= 79)
			return EXIT_FAILURE;
	}
	return dmap[n][y][x];
}

int pinp(char m){
	switch(m){
	case 'a':
	case 's':
	}
	return imap[0][py][px];
}

int main(){
	initscr();
	noecho();
	while((ch=getch())!= 'q'){
		p_test_imap();
		getch();
		erase();
	}
	endwin();
	return 0;
}
