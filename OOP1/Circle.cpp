#include "Circle.h"

namespace ClFig {
	
	bool Circle::CheckArea(int x, int y) {
		int r = width / 2;
		int x0 = this->x + r;
		int y0 = this->y + height / 2;
		if ((x - x0) * (x - x0) + (y - y0) * (y - y0) < r * r) {
			return true; //point belongs to circle
		}
		return false;

	}
	void Circle::ReSet(int x, int y)
	{
		width = x - this->x;
		height = width;
		if ((x<this->x && y>this->y) || (x > this->x && y < this->y))
			height = -height;

	}
	Circle::Circle(Color PenColor, Color BrColor, float PenWidth, int x, int y) :Ellipse(PenColor, BrColor, PenWidth, x, y)
	{
	}
}