#include "Hexagon.h"

namespace ClFig {

		
		void Hexagon::ReSet(int x, int y) 
		{
			coords[3].X = x;
			coords[3].Y = y;
			float centerY = (float)(coords[0].Y + coords[3].Y) / 2;
			float a = x - coords[0].X;
			float centerX = coords[0].X + a / 2;
			coords[1].X = coords[3].X;
			coords[2].X = centerX + a;
			coords[2].Y = centerY;
			coords[4].Y = coords[3].Y;
			coords[5].X = centerX - a;
			coords[5].Y = centerY;

		}
		
		bool Hexagon::CheckRubbish() 
		{
			return Figure::CheckGarbage(coords[0].X, coords[0].Y, coords[3].X, coords[3].Y);
		}
		Hexagon::Hexagon(Color PenColor, Color BrColor, float PenWidth, int x, int y) :Polygon(PenColor, BrColor, PenWidth, x, y, 6)
		{
		}

}