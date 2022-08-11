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

		Rectangle::Rectangle(Color PenColor, Color BrColor, float PenWidth, int x, int y) :Polygon(PenColor, BrColor, PenWidth, x, y, 4)
		{
		}

	
}