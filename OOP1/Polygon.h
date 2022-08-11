#pragma once
#include"Closed.h"

namespace ClFig {

	public ref class Polygon :public Closed
	{
	protected:
		cli::array<Point>^coords;
		int vertexes = 5;
		Polygon(Color PenColor, Color BrColor, float PenWidth, int x, int y, int vertexes);
	public:
		bool CheckArea(int x, int y) override;
		void Draw(Graphics^ gr) override;
		bool CheckRubbish() override;	
	};
}
