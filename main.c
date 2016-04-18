#include <ncurses.h>
#define MAP_MAX 80

//GLOBAL VARIABLES
int imap[2][MAP_MAX][MAP_MAX]={0}; // Item Map -> stores item data for each block (items,y,x)
int dmap[3][MAP_MAX][MAP_MAX]={0}; // Data Map -> determines how the block functions (data,y,x)
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

int chkwl

int pinp(char m){
	switch(m){
	case 'a':
	
	}
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