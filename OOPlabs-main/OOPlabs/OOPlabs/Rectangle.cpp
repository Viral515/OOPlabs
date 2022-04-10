#include "Rectangle.h"
#include <iostream>
#include "DoubleValidator.h"

using namespace std;

Rectangle::Rectangle()
{
	_length = 10;
	_width = 10;
	_centre = Point();
}

Rectangle::Rectangle(double length, double width, Point centre)
{
	_length = length;
	_width = width;
	_centre = centre;
}

Rectangle::Rectangle(double length, double width, double x, double y)
{
	_length = length;
	_width = width;
	_centre = Point(x,y);
}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	_length = length;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
	_width = width;
}

void Rectangle::SetCentre(Point centre)
{
	_centre = centre;
}

void Rectangle::SetCentre(double x, double y)
{
	_centre = Point(x, y);
}

double Rectangle::GetLength()
{
	return _length;
}

double Rectangle::GetWidth()
{
	return _width;
}

Point Rectangle::GetCentre() 
{
	return _centre;
}