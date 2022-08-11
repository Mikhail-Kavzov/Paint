#pragma once
#include "Ellipse.h"
namespace ClFig{

public ref class Circle :public Ellipse
	{
	public:	
		bool CheckArea(int x, int y) override;	
		void ReSet(int x, int y) override;
		Circle(Color PenColor, Color BrColor, float PenWidth, int x, int y);

	};
}