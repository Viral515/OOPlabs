#include "IOFlight.h"

void DemoFlightWithTime()
{
	const int flightsCount = 5;
	Flight flights[flightsCount];
	flights[0].SetNumber("1");
	flights[0].SetDeparturePoint("A");
	flights[0].SetDestinationPoint("B");
	flights[0].SetDepartureTime(Time(2000, 1, 1, 14, 15));
	flights[0].SetArrivalTime(Time(2000, 1, 1, 15, 25));

	flights[1].SetNumber("2");
	flights[1].SetDeparturePoint("C");
	flights[1].SetDestinationPoint("D");
	flights[1].SetDepartureTime(Time(2000, 1, 1, 11, 35));
	flights[1].SetArrivalTime(Time(2000, 1, 1, 15, 25));

	flights[2].SetNumber("3");
	flights[2].SetDeparturePoint("E");
	flights[2].SetDestinationPoint("F");
	flights[2].SetDepartureTime(Time(2000, 1, 1, 16, 35));
	flights[2].SetArrivalTime(Time(2000, 1, 1, 17, 15));

	flights[3].SetNumber("4");
	flights[3].SetDeparturePoint("G");
	flights[3].SetDestinationPoint("H");
	flights[3].SetDepartureTime(Time(2000, 1, 1, 14, 15));
	flights[3].SetArrivalTime(Time(2000, 1, 1, 18, 45));

	flights[4].SetNumber("5");
	flights[4].SetDeparturePoint("I");
	flights[4].SetDestinationPoint("J");
	flights[4].SetDepartureTime(Time(2000, 1, 1, 14, 15));
	flights[4].SetArrivalTime(Time(2000, 1, 1, 16, 55));

	for (int i = 0; i < flightsCount; i++)
	{
		cout << flights[i].GetNumber() << ' ';
		cout << flights[i].GetDeparturePoint() << '-' << flights[i].GetDestinationPoint() << ' ';
		cout << "Departure: " << flights[i].GetDepartureTime().GetMonth() << '.'
			<< flights[i].GetDepartureTime().GetDay() << ' ' <<
			flights[i].GetDepartureTime().GetHour() << ':' <<
			flights[i].GetDepartureTime().GetMinutes() <<
			" Destination: " << flights[i].GetArrivalTime().GetMonth() << '.'
			<< flights[i].GetArrivalTime().GetDay() << ' ' <<
			flights[i].GetArrivalTime().GetHour() << ':' <<
			flights[i].GetArrivalTime().GetMinutes() << endl;
	}

	for (int i = 0; i < flightsCount; i++)
	{
		cout << flights[i].GetNumber() << ' ';
		cout << flights[i].GetDeparturePoint() << '-' << flights[i].GetDestinationPoint() << ' ';
		cout << "Time: " << flights[i].GetFlightTimeMinutes() << " minutes." << endl;
	}

	system("pause");
}