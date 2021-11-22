#include <ncurses.h>
#include <windows.h>
#include <iostream>
#include "string.h";

using namespace std;


void yay(){
	
	Sleep(300);
	refresh();
	clear();
	
	
}

int main(){
	
	initscr();

	string name[19]= {"Nathania santa nigel s","nAthania santa nigel s","naThania santa nigel s","natHania santa nigel s",
	"nathAnia santa nigel s","nathaNia santa nigel s","nathanIa santa nigel s","nathaniA santa nigel s",
	"nathania Santa nigel s","nathania sAnta nigel s","nathania saNta nigel s", "nathania sanTa nigel s","nathania santA nigel s",
	"nathania santa Nigel s", "nathania santa nIgel s","nathania santa niGel s", "nathania santa nigEl s", "nathania santa nigeL s",
	"nathania santa nigel S" };
	
	start_color();
	
	for(int k=0 ;k<19;k++) {
	init_pair(2, COLOR_YELLOW,COLOR_WHITE);
	attron (COLOR_PAIR(2));			
	printw("%s", name[k].c_str());	
	yay();
}
	refresh();
	getch();
	endwin();
	

	
	
}
