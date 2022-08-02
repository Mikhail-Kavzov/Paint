#pragma once
#include "Line.h"
namespace ClFig {

		void Line::ReSet(int x, int y)
		{
			x2 = x;
			y2 = y;
		}
		bool Line::CheckRubbish()
		{
			return Figure::CheckGarbage(x1, y1, x2, y2);
		}
		void Line::Draw(Graphics^ gr) 
		{
			gr->DrawLine(gcnew Pen(PenColor, PenWidth - 3), x1, y1, x2, y2);
		}
		Line::Line(Color PenColor, float PenWidth, int x, int y) :Figure(PenColor, PenWidth),x1(x),x2(x),y1(y),y2(y)
		{
		}

}