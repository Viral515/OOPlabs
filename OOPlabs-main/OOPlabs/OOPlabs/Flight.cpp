#include "Flight.h"

Flight::Flight()
{
	_number = 1;
	_departurePoint = 'A';
	_destinationPoint = 'B';
	_departureTime = Time();
	_arrivalTime = Time();
}

Flight::Flight(int number, string departurePoint, string destanationPoint, Time departureTime, Time arrivalTime)
{
	_number = number;
	_departurePoint = departurePoint;
	_destinationPoint = destanationPoint;
	_departureTime = departureTime;
	_arrivalTime = arrivalTime;
}

void Flight::SetNumber(string number)
{
	_number = number;
}

void Flight::SetDeparturePoint(string departurePoint)
{
	_departurePoint = departurePoint;
}

void Flight::SetDestinationPoint(string destinationPoint)
{
	_destinationPoint = destinationPoint;
}

void Flight::SetDepartureTime(Time departureTime)
{
	_departureTime = departureTime;
}

void Flight::SetArrivalTime(Time arrivalTime)
{
	if (_departureTime.GetYear() > arrivalTime.GetYear())
	{
		throw exception("Invalid value");
	}
	else
	{
		if ((_departureTime.GetMonth() > arrivalTime.GetMonth()) &&
			(_departureTime.GetYear() == arrivalTime.GetYear()))
		{
			throw exception("Invalid value");
		}
		else
		{
			if ((_departureTime.GetDay() > arrivalTime.GetDay()) &&
				(_departureTime.GetMonth() == arrivalTime.GetMonth()))
			{
				throw exception("Invalid value");
			}
			else
			{
				if ((_departureTime.GetHour() > arrivalTime.GetHour()) &&
					(_departureTime.GetDay() > arrivalTime.GetDay()))
				{
					throw exception("Invalid value");
				}
				else
				{
					if ((_departureTime.GetMinutes() > arrivalTime.GetMinutes()) && 
						(_departureTime.GetHour() == arrivalTime.GetHour()))
					{
						throw exception("Invalid value");
					}
				}
			}
		}
	}
	_arrivalTime = arrivalTime;
}

string Flight::GetNumber()
{
	return _number;
}

string Flight::GetDeparturePoint()
{
	return _departurePoint;
}

string Flight::GetDestinationPoint()
{
	return _destinationPoint;
}

Time Flight::GetDepartureTime()
{
	return _departureTime;
}

Time Flight::GetArrivalTime()
{
	return _arrivalTime;
}

int Flight::GetFlightTimeMinutes()
{
	int minutes;
	int hour = this->GetArrivalTime().GetHour() - this->GetDepartureTime().GetHour();
	if (this->GetArrivalTime().GetMinutes() < this->GetDepartureTime().GetMinutes())
	{
		minutes = this->GetDepartureTime().GetMinutes() - this->GetArrivalTime().GetMinutes() + 60;
		hour--;
	}
	else
	{
		minutes = this->GetArrivalTime().GetMinutes() - this->GetDepartureTime().GetMinutes();
	}
	minutes += hour * 60;

	return minutes;
}