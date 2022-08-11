#pragma once
#using <system.drawing.dll>
#include<iostream>
#include<cmath>


namespace ClFig{
	const int eps = 1;
	const int dest = 5;
	using namespace System::Drawing;
public  ref  class Figure {
	protected:
		Color PenColor;
		float PenWidth;
		Figure(Color PenColor, float PenWidth);
	public:
		virtual void Draw(Graphics^gr) = 0;
		virtual void ReSet(int x, int y) = 0;
		virtual bool CheckRubbish() = 0;
		bool CheckGarbage(int x1, int y1, int x2, int y2);
};
}