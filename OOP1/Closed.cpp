#include "Closed.h"

namespace ClFig {

		Closed::Closed(Color PenColor, Color BrColor, float PenWidth) :Figure(PenColor, PenWidth) {

			this->BrColor = BrColor;
		}
		void Closed::SetBrColor(Color BrColor)
		{
			this->BrColor = BrColor;
		}
	

}