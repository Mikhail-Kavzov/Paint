#pragma once
#include "Ellipse.h"
namespace ClFig{

public ref class Circle :public Ellipse
	{
	public:	
		void Draw(Graphics^ gr) override;	
		bool CheckArea(int x, int y) override;
		bool CheckRubbish() override;		
		void ReSet(int x, int y) override;
		Circle(Color PenColor, Color BrColor, float PenWidth, int x, int y);

	};
}