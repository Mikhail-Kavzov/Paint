#include "Polygon.h"

namespace ClFig {
	Polygon::Polygon(Color PenColor, Color BrColor, float PenWidth, int x, int y, int vertexes) :Closed(PenColor, BrColor, PenWidth)
	{
		this->vertexes = vertexes;
		coords = gcnew cli::array<Point>(vertexes);
		for (int i = 0; i < vertexes; i++)
		{
			coords[i].X = x;
			coords[i].Y = y;
		}

	}

	bool Polygon::CheckArea(int x, int y) {
		bool result = false;
		int j = vertexes - 1;
		for (int i = 0; i < vertexes; i++) {
			if ((coords[i].Y < y && coords[j].Y >= y || coords[j].Y < y && coords[i].Y >= y) &&
				(coords[i].X + (y - coords[i].Y) / (float)(coords[j].Y - coords[i].Y) * (coords[j].X - coords[i].X) < x))
				result = !result;
			j = i;
		}

		return result;
	}
	void Polygon::Draw(Graphics^ gr)
	{
		gr->FillPolygon(gcnew SolidBrush(BrColor), coords);
		gr->DrawPolygon(gcnew Pen(PenColor, PenWidth), coords);
		
	}
	bool Polygon::CheckRubbish()
	{
		return Figure::CheckGarbage(coords[0].X, coords[0].Y, coords[2].X, coords[2].Y);
	}
}