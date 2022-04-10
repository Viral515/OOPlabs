#pragma once
#include <iostream>
#include <string>
#include "Time.h"

using namespace std;

class Flight
{
private:
	string _number;
	string _departurePoint;
	string _destinationPoint;
	Time _departureTime;
	Time _arrivalTime;

public: 
	Flight();
	Flight(int number, string departurePoint, string destanationPoint, Time departureTime, Time arrivalTime);

	void SetNumber(string number);
	void SetDeparturePoint(string departurePoint);
	void SetDestinationPoint(string destinationPoint);
	void SetDepartureTime(Time departureTime);
	void SetArrivalTime(Time arrivalTime);

	string GetNumber();
	string GetDeparturePoint();
	string GetDestinationPoint();
	Time GetDepartureTime();
	Time GetArrivalTime();

	int GetFlightTimeMinutes();
};
