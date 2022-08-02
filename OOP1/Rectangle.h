#pragma once
#include "Polygon.h"

namespace ClFig{

public ref  class Rectangle:public Polygon
	{
	public:			
		void ReSet(int x, int y) override;
		bool CheckArea(int x, int y) override;
		bool CheckRubbish() override;
		void Draw(Graphics^ gr) override;
		Rectangle(Color PenColor, Color BrColor, float PenWidth, int x, int y);

	};
}