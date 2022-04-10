#include "IOCollisionManager.h"
#include "CollisionManager.h"
#include "Rectangle.h"
#include "Ring.h"

void DemoCollision()
{
	Rectangle rectangleOne = Rectangle(4, 6, 0, 0);
	Rectangle rectangleTwo = Rectangle(2, 4, 0, 9);
	if (CollisionManager::IsCollision(rectangleOne, rectangleTwo) == true)
	{
		cout << "1 and 2 rectangle is collision." << endl;
	}
	else
	{
		cout << "1 and 2 rectangle don't collision." << endl;
	}

	Rectangle rectangleThree = Rectangle(4, 6, 0, 0);
	Rectangle rectangleFour = Rectangle(4, 6, 3, -2);
	if (CollisionManager::IsCollision(rectangleThree, rectangleFour) == true)
	{
		cout << "3 and 4 rectangle is collision." << endl;
	}
	else
	{
		cout << "3 and 4 rectangle don't collision." << endl;
	}


	Ring ringOne = Ring(3, 2, Point(0, 0));
	Ring ringTwo = Ring(2, 1, Point(0, 8));
	if (CollisionManager::IsCollision(ringOne, ringTwo) == true)
	{
		cout << "1 and 2 ring is collision." << endl;
	}
	else
	{
		cout << "1 and 2 ring don't collision." << endl;
	}

	Ring ringThree = Ring(3, 2, Point(0, 0));
	Ring ringFour = Ring(2, 1, Point(0, 4));
	if (CollisionManager::IsCollision(ringThree, ringFour) == true)
	{
		cout << "1 and 2 ring is collision." << endl;
	}
	else
	{
		cout << "1 and 2 ring don't collision." << endl;
	}
}