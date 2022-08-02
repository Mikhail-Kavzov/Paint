#pragma once
#include "Closed.h"
namespace ClFig{
public ref  class Ellipse :public Closed
	{
	protected:
		int x,y,width,height;
	public:
		
		void Draw(Graphics^ gr) override;
		bool CheckArea(int x, int y) override;
		bool CheckRubbish() override;
		void ReSet(int x, int y) override;
		Ellipse(Color PenColor, Color BrColor, float PenWidth, int x, int y);

	};
}