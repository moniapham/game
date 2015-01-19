//#include "display.h"
#include "ccc_win.h"

//Display::Display(){
	
//}

//void Display::clear(){

//}

void fillBoard(){
	int DIMENSIONSINTERVAL = 2;
	const double INCREMENTS = .05;
	for (double x = -3.0; x <= 19; x+=INCREMENTS){
		cwin << Line(Point(x, -6), Point(x, 19), "#813C00"); //Outerboard
	}
	for (double x = 0.0; x <=16 ; x += INCREMENTS){
		cwin << Line(Point(x, 0), Point(x, 16), "#CE813E"); //Board
	}

	for(int i = 0; i <= 16 ; i+= DIMENSIONSINTERVAL){
		cwin << Line(Point(i, 0), Point(i, 16));
		cwin << Line(Point(0, i), Point(16, i));
	}

	for (double x = -4; x <= -1; x += INCREMENTS){
		cwin << Line(Point(0, x), Point(16, x), "#CE813E"); //Legend
	}
	cwin << Line(Point(0, -4), Point(16, -4));
	cwin << Line(Point(0, -1), Point(16, -1));
	cwin << Line(Point(0, -1), Point(0, -4));
	cwin << Line(Point(16,-1), Point(16, -4));



}

int ccc_win_main(){
	cwin.coord(-3, 19, 19, -5);
	fillBoard();
	return 0;
}