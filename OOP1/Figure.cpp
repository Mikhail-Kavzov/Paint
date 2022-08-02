#include "Figure.h"

namespace ClFig {

		Figure::Figure(Color PenColor, float PenWidth)
		{
			this->PenColor = PenColor;
			this->PenWidth = PenWidth;
		}
		bool Figure::CheckGarbage(int x1, int y1, int x2, int y2)
		{
			int a = x2 - x1;
			int b = y2 - y1;
			return sqrt(a * a + b * b) > dest;
		}

	
}