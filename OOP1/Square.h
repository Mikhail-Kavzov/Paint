#pragma once
#include "Rectangle.h"
namespace ClFig{

public ref  class Square:public Rectangle
	{
	public:

		void ReSet(int x, int y) override;
		Square(Color PenColor, Color BrColor, float PenWidth, int x, int y);
	};
}