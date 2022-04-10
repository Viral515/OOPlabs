#pragma once
#include <iostream>
#include "Point.h"

using namespace std;

class Ring
{
private:
	static int AllRingsCount;

	float _outRadius = 10;
	float _inRadius = 5;
	Point _centre = Point();

	void AssertOnPositiveValue(double value);

public:
	Ring(float outRadius, float inRadius, Point centre);
	~Ring();

	void SetRadius(float outRadius, float inRadius);
	void SetCentre(Point centre);

	float GetOutRadius();
	float GetInRadius();
	Point GetCentre();

	double GetArea();

	static int GetAllRingsCount();
};