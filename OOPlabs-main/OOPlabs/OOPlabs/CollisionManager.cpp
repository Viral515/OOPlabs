#include "CollisionManager.h"
#include <cmath>

bool CollisionManager::IsCollision(Rectangle& rectangleOne, Rectangle& rectangleTwo)
{
	float dx = fabs(rectangleOne.GetCentre().GetX() - rectangleTwo.GetCentre().GetX());
	float dy = fabs(rectangleOne.GetCentre().GetY() - rectangleTwo.GetCentre().GetY());
	if ((dx < fabs(rectangleOne.GetWidth() + rectangleTwo.GetWidth()) / 2) &&
		(dy < fabs(rectangleOne.GetLength() + rectangleTwo.GetLength()) / 2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CollisionManager::IsCollision(Ring& ringOne, Ring& ringTwo)
{
	float C = sqrt(fabs(ringOne.GetCentre().GetX() - ringTwo.GetCentre().GetX())
		* fabs(ringOne.GetCentre().GetX() - ringTwo.GetCentre().GetX())
		+ fabs(ringOne.GetCentre().GetY() - ringTwo.GetCentre().GetY())
		* fabs(ringOne.GetCentre().GetY() - ringTwo.GetCentre().GetY()));
	if (C < (ringOne.GetOutRadius() + ringTwo.GetOutRadius()))
	{
		return true;
	}
	else
	{
		return false;
	}
}