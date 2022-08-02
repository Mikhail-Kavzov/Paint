#pragma once
#include"Polygon.h"
namespace ClFig {

	public ref class Hexagon:public Polygon
	{

	public:
		bool CheckArea(int x, int y) override;
		void ReSet(int x, int y) override;
		void Draw(Graphics^ gr) override;
		bool CheckRubbish() override;
		Hexagon(Color PenColor, Color BrColor, float PenWidth, int x, int y);
	};
}