#include "IORing.h"

void DemoRing()
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