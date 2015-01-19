#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <cmath>
#include <string>
#include "ccc_win.h"
#include <cstdlib>
#include <vector>

using namespace std;

class Piece
{
public:
	Piece(Point center, string color);
	void drawPiece();

private:
	Point center;
	string color;
};

#endif