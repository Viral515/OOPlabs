#include "Ring.h"
#include "DoubleValidator.h"

int Ring::AllRingsCount = 0;

void Ring::SetRadius(float outRadius, float inRadius)
{
	DoubleValidator::AssertPositiveValue(outRadius);
	DoubleValidator::AssertPositiveValue(inRadius);
	if (outRadius < inRadius)
	{
		throw exception("Invalid radius value.");
	}
	_outRadius = outRadius;
	_inRadius = inRadius;
}

void Ring::SetCentre(Point centre)
{
	_centre = centre;
}

float Ring::GetOutRadius()
{
	return _outRadius;
}

float Ring::GetInRadius()
{
	return _inRadius;
}

Point Ring::GetCentre()
{
	return _centre;
}

Ring::Ring(float outRadius, float inRadius, Point centre)
{
	Ring::AllRingsCount++;
	SetRadius(outRadius, inRadius);
	_centre = centre;
}

Ring::~Ring()
{
	AllRingsCount--;
}

double Ring::GetArea()
{
	return ((3.14 * _outRadius * _outRadius) - (3.14 * _inRadius * _inRadius));
}

void Ring::AssertOnPositiveValue(double value)
{
	if (value < 0)
	{
		throw exception("Value < 0");
	}
}

int Ring::GetAllRingsCount()
{
	return AllRingsCount;
}