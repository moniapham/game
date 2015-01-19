//#include "piece.h"

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include "ccc_win.h"

const double RADIUS_INCREMENT=0.01;
const double RADIUS=1;

/*Piece::Piece(Point center, string color)
{
	this->color=color;
}

void drawPiece();*/



int ccc_win_main()
{
	while (true)
	{
		for (double radius = 0.0; radius <= RADIUS; radius += RADIUS_INCREMENT) 
		{
			cwin << Circle(Point(0,0), radius, "#000000");
		}
	}
	return 0;
}
