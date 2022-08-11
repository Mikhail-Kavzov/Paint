#include "Square.h"

namespace ClFig {

		void Square::ReSet(int x, int y)
		{
			int width;
			width = x - coords[0].X;
			if ((x<coords[0].X && y>coords[0].Y) || (x > coords[0].X && y < coords[0].Y))
				width = y - coords[0].Y;

			coords[1].X = x;
			coords[3].Y = coords[0].Y + width;
			coords[2].X = coords[1].X;
			coords[2].Y = coords[3].Y;

		}

		Square::Square(Color PenColor, Color BrColor, float PenWidth, int x, int y) :Rectangle(PenColor, BrColor, PenWidth, x, y)
		{
		}

}