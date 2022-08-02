#include "Triangle.h"

namespace ClFig {

		void Triangle::ReSet(int x, int y)
		{
			coords[2].X = x;
			coords[2].Y = y;
			coords[1].X = 2 * coords[0].X - coords[2].X;
			coords[1].Y = y;
		}
		bool Triangle::CheckArea(int x, int y)  {

			return Polygon::CheckArea(x, y);
		}
		bool Triangle::CheckRubbish()
		{
			return Figure::CheckGarbage(coords[0].X, coords[0].Y, coords[2].X, coords[2].Y);
		}
		void Triangle::Draw(Graphics^ gr)
		{
			Polygon::Draw(gr);
		}
		Triangle::Triangle(Color PenColor, Color BrColor, float PenWidth, int x, int y) :Polygon(PenColor, BrColor, PenWidth, x, y, 3)
		{
		}

}