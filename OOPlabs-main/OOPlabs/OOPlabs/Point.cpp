#include "Point.h"

Point::Point()
{
	_x = 0;
	_y = 0;
}

Point::Point(double x, double y)
{
	_x = x;
	_y = y;
}

void Point::SetX(double x)
{
	_x = x;
}

void Point::SetY(double y)
{
	_y = y;
}

double Point::GetX()
{
	return _x;
}

double Point::GetY()
{
	return _y;
}