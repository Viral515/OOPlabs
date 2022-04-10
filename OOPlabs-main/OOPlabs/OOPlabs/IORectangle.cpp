#include "IORectangle.h"
#include <string>
#include <iostream>

using namespace std;

void DemoRectangleWithPoint()
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