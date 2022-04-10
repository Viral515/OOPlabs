#include "Route.h"
#include <iostream>
using namespace std;

void DemoRoute()
{
	const int routeCount = 5;
	Route routes[routeCount];

	for (int i = 0; i < routeCount; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}

	for (int i = 0; i < routeCount; i++)
	{
		WriteRouteToConsole(routes[i]);
	}

	cout << "Enter the author: ";
	string author;
	cin >> author;
	int routeId = FindRouteTo(routes, routeCount, author);
	if (routeId != -1)
	{
		WriteRouteToConsole(routes[routeId]);
	}
	else
	{
		cout << "Not found." << endl;
	}
	system("pause");
}

void ReadRouteFromConsole(Route& route)
{
	cout << "Enter the route number: ";
	cin >> route.Number;
	cout << "Enter the route time: ";
	while (true)
	{
		cin >> route.Time;
		if (route.Time > 0)
		{
			break;
		}
		else
		{
			cout << "Invalid value. Try again." << endl;
		}
	}
	cout << "Enter the route period: ";
	while (true)
	{
		cin >> route.Period;
		if (route.Period > 0)
		{
			break;
		}
		else
		{
			cout << "Invalid value. Try again." << endl;
		}
	}

	cout << "Enter the number of stops: ";
	while (true)
	{
		cin >> route.StopsCount;
		if ((route.StopsCount > 0) && (route.StopsCount < 11))
		{
			break;
		}
		else
		{
			cout << "Invalid value. Try again." << endl;
		}
	}
	route.Stops = new string[route.StopsCount];
	for (int i = 0; i < route.StopsCount; i++)
	{
		cout << "Enter the author " << i << ':';
		cin >> route.Stops[i];
	}
}

void WriteRouteToConsole(Route& route)
{
	cout << "Route number: " << route.Number << endl;
	cout << "Route time: " << route.Time << endl;
	cout << "Route period: " << route.Period << endl;
	cout << "Route stops: " << route.Stops[0];
	for (int i = 1; i < route.StopsCount; i++)
	{
		cout << ", " << route.Stops[i];
	}
	cout << '.' << endl;
}

int FindRouteTo(Route* routes, int stopsCount, string stop)
{
	for (int i = 0; i < stopsCount; i++)
	{
		for (int j = 0; j < routes[i].StopsCount; j++)
		{
			if (routes[i].Stops[j] == stop)
			{
				return i;
			}
		}
	}
	return -1;
}