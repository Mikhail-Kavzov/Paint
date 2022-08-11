#pragma once
#include "Polygon.h"
namespace ClFig{

public ref class Triangle :public Polygon
	{
	public:		
		void ReSet(int x, int y) override;
		Triangle(Color PenColor, Color BrColor, float PenWidth, int x, int y);

	};
}