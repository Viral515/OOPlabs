#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
	if (value > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	if ((value > min) && (value < max))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (IsValuePositive(value) == false)
	{
		throw exception("Value must be positive");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (IsValueInRange(value, min, max) == false)
	{
		throw exception("Value must be positive");
	}
}