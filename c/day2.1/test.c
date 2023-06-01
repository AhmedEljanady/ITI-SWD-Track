

#include <ncurses.h>

int main() 
{
	initscr();
	move(5,10);
	printw("Hello world");
	getch();
	endwin();








}
