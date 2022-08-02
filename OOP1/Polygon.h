#pragma once
#using <system.drawing.dll>
#include<iostream>
#include"Figure.h"
#include"Closed.h"
namespace ClFig {

	using namespace System::Drawing;
	public ref class Polygon :public Closed
	{
	protected:
		cli::array<Point>^coords;
		int vertexes = 5;
		Polygon(Color PenColor, Color BrColor, float PenWidth, int x, int y, int vertexes) :Closed(PenColor, BrColor, PenWidth)
		{
			this->vertexes = vertexes;
			coords = gcnew cli::array<Point>(vertexes);
			for (int i = 0; i < vertexes; i++)
			{
				coords[i].X = x;
				coords[i].Y = y;
			}

		}
	public:
		bool CheckArea(int x, int y) override {
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
		void Draw(Graphics^ gr) override
		{
			gr->DrawPolygon(gcnew Pen(PenColor, PenWidth), coords);
			gr->FillPolygon(gcnew SolidBrush(BrColor), coords);
		}
		bool CheckRubbish() override
		{
			return Figure::CheckGarbage(coords[0].X, coords[0].Y, coords[2].X, coords[2].Y);
		}
	
	};
}
