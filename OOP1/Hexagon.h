#pragma once
#include"Polygon.h"
namespace ClFig {

	public ref class Hexagon:public Polygon
	{

	public:
		void ReSet(int x, int y) override;
		bool CheckRubbish() override;
		Hexagon(Color PenColor, Color BrColor, float PenWidth, int x, int y);
	};
}