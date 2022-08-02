#pragma once
#include "Rectangle.h"

namespace ClFig {

		void Rectangle::ReSet(int x, int y) 
		{
			coords[2].X = x;
			coords[2].Y = y;
			coords[1].X = x;
			coords[3].Y = y;
		}
		bool Rectangle::CheckArea(int x, int y)  {
			return Polygon::CheckArea(x, y);
		}
		bool Rectangle::CheckRubbish() 
		{
			return Figure::CheckGarbage(coords[0].X, coords[0].Y, coords[2].X, coords[2].Y);
		}
		void Rectangle::Draw(Graphics^ gr)
		{
			Polygon::Draw(gr);
		}
		Rectangle::Rectangle(Color PenColor, Color BrColor, float PenWidth, int x, int y) :Polygon(PenColor, BrColor, PenWidth, x, y, 4)
		{


		}

	
}