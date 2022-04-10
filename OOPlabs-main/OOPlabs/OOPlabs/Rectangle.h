#pragma once
#include "Point.h"

class Rectangle
{
private:
	double _length;
	double _width;
	Point _centre;

public:
	Rectangle();
	Rectangle(double length, double width, Point centre);
	Rectangle(double length, double width, double x, double y);

	void SetLength(double length);
	void SetWidth(double width);
	void SetCentre(Point centre);
	void SetCentre(double x, double y);

	double GetLength();
	double GetWidth();
	Point GetCentre();

};