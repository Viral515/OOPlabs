#include "GeometricProgram.h"
#include "IOCollisionManager.h"
#include "CollisionManager.h"
#include "Rectangle.h"
#include "IORing.h"

void GeometricProgram::DemoRing()
{
	Ring ringOne = Ring(10, 5, Point(1, 1));
	cout << Ring::GetAllRingsCount() << endl;
	Ring ringTwo = Ring(8, 3, Point(1, 1));
	cout << Ring::GetAllRingsCount() << endl;

	cout << "Before: " << Ring::GetAllRingsCount() << endl;
	Ring* ring = new Ring(10.0, 5.0, Point(25.0, 25.0));
	cout << "In time: " << Ring::GetAllRingsCount() << endl;
	delete ring;
	cout << "After: " << Ring::GetAllRingsCount() << endl;
	try
	{
		Ring ringThree = Ring(5, 10, Point(1, 1));
		cout << Ring::GetAllRingsCount() << endl;
	}
	catch (exception exception)
	{
		cerr << exception.what() << endl;
	}
}

void GeometricProgram::DemoCollision()
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

void GeometricProgram::DemoRectangle()
{
	const int rectanglesCount = 5;
	Rectangle rectangles[rectanglesCount];
	rectangles[0].SetLength(10);
	rectangles[0].SetWidth(10);
	rectangles[0].SetCentre(10, 10);

	rectangles[1].SetLength(20);
	rectangles[1].SetWidth(20);
	rectangles[1].SetCentre(20, 20);

	rectangles[2].SetLength(15);
	rectangles[2].SetWidth(15);
	rectangles[2].SetCentre(15, 15);

	rectangles[3].SetLength(25);
	rectangles[3].SetWidth(25);
	rectangles[3].SetCentre(25, 25);

	rectangles[4].SetLength(30);
	rectangles[4].SetWidth(30);
	rectangles[4].SetCentre(30, 30);

	for (int i = 0; i < rectanglesCount; i++)
	{
		cout << "X =  " << rectangles[i].GetCentre().GetX() << "; ";
		cout << "Y =  " << rectangles[i].GetCentre().GetY() << "; ";
		cout << "Length = " << rectangles[i].GetLength() << "; ";
		cout << "Width = " << rectangles[i].GetWidth() << '.' << endl;
	}

	double sumX = 0;
	double sumY = 0;
	for (int i = 0; i < rectanglesCount; i++)
	{
		sumX += rectangles[i].GetCentre().GetX();
		sumY += rectangles[i].GetCentre().GetY();
	}
	sumX = sumX / rectanglesCount;
	sumY = sumY / rectanglesCount;

	cout << "Xcenter = " << sumX << " Ycenter = " << sumY << endl;

	system("pause");
}