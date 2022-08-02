#include "Ellipse.h"

namespace ClFig {

		void Ellipse::Draw(Graphics^ gr) 
		{
			gr->DrawEllipse(gcnew Pen(PenColor, PenWidth), x, y, width, height);
			gr->FillEllipse(gcnew SolidBrush(BrColor), x, y, width, height);
		}
		bool Ellipse::CheckArea(int x, int y)  {
			;
			int a = width / 2;
			int b = height / 2;
			int x0 = this->x + a;
			int y0 = this->y + b;

			float res = (float)((x - x0) * (x - x0) / (a * a)) + (float)((y - y0) * (y - y0) / (b * b));
			if (res < 1)
				return true;
			return false;
		}
		bool Ellipse::CheckRubbish()
		{
			return Figure::CheckGarbage(x, y, x + width, y + height);
		}
		void Ellipse::ReSet(int x, int y) 
		{
			width = x - this->x;
			height = y - this->y;
		}

		Ellipse::Ellipse(Color PenColor, Color BrColor, float PenWidth, int x, int y) :Closed(PenColor, BrColor, PenWidth)
		{
			this->x = x;
			this->y = y;
		}

	
}