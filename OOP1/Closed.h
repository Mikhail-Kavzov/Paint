#pragma once
#include "Figure.h"

namespace ClFig{
 public ref class Closed : public Figure {
	protected:
		Color BrColor;
	
		Closed(Color PenColor, Color BrColor, float PenWidth);
 public:
		void SetBrColor(Color BrColor);
		virtual bool CheckArea(int x, int y) = 0;
	};
	 
}