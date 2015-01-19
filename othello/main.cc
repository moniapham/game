#include "ccc_win.h"
#include "piece.h"

int ccc_win_main()
{
	while (true)
	{
		Piece p1(Point(0,0), "#B762FF");
		p1.drawPiece();
	}

	/*
	const double CLOCK_RADIUS=2.25;
	while (true) 
	{
		Clocks c1(Point(-0.375-3*CLOCK_RADIUS, 0), "Pacific", CLOCK_RADIUS, -2);
		Clocks c2(Point(-0.125-CLOCK_RADIUS, 0), "Mountain",  CLOCK_RADIUS, -1);
		Clocks c3(Point(0.125+CLOCK_RADIUS, 0), "Central",  CLOCK_RADIUS, 0);
		Clocks c4(Point(0.375+3*CLOCK_RADIUS, 0), "Eastern", CLOCK_RADIUS, 1);
		c1.drawLabeledClock();
		c2.drawLabeledClock();
		c3.drawLabeledClock();
		c4.drawLabeledClock();
		for (int i=0; i<500; i++)
			cwin << Point (10,10);
		sleep(1);

		cwin.clear();
	}
    */
    return 0;
}