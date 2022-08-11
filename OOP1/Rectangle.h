#pragma once
#include "Polygon.h"

namespace ClFig{

public ref  class Rectangle:public Polygon
	{
	public:			
		void ReSet(int x, int y) override;
		Rectangle(Color PenColor, Color BrColor, float PenWidth, int x, int y);

	};
}