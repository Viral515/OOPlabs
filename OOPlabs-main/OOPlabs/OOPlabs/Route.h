#pragma once
#include <string>
using namespace std;

struct Route
{
	int Number;
	int Time;
	int Period;
	string* Stops;
	int StopsCount;
};

void DemoRoute();
void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);
int FindRouteTo(Route* routes, int stopsCount, string stop);