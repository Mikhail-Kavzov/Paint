#pragma once
#include "Figure.h"
namespace ClFig{

public ref  class Line :public Figure
	{
	private:
		int x1, x2, y1,y2;
	public:
		
		void ReSet(int x, int y) override;
		bool CheckRubbish() override;
		void Draw(Graphics^ gr) override;
		Line(Color PenColor, float PenWidth, int x, int y);

	};
}