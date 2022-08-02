#pragma once
#include "Polygon.h"
namespace ClFig{

public ref class Triangle :public Polygon
	{
	public:		
		void ReSet(int x, int y) override;
		bool CheckArea(int x, int y) override;
		bool CheckRubbish() override;
		void Draw(Graphics^ gr) override;
		Triangle(Color PenColor, Color BrColor, float PenWidth, int x, int y);

	};
}