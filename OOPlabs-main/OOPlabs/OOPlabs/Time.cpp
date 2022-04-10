#include "Time.h"
#include <iostream>

using namespace std;

Time::Time()
{
	_year = 2000;
	_month = 1;
	_day = 1;
	_hour = 1;
	_minutes = 1;
}

Time::Time(int year, int month, int day, int hour, int minutes)
{
	_year = year;
	_month = month;
	_day = day;
	_hour = hour;
	_minutes = minutes;
}

void Time::SetYear(int year)
{
	if ((year > 2022) || (year < 0))
	{
		throw exception("Invalid value");
	}
	_year = year;
}

void Time::SetMonth(int month)
{
	if ((month > 12) || (month < 0))
	{
		throw exception("Invalid value");
	}
	_month = month;
}

void Time::SetDay(int day)
{
	if ((day > 30) || (day < 0))
	{
		throw exception("Invalid value");
	}
	_day = day;
}

void Time::SetHour(int hour)
{
	if ((hour > 24) || (hour < 0))
	{
		throw exception("Invalid value");
	}
	_hour = hour;
}

void Time::SetMinutes(int minutes)
{
	if ((minutes > 60) || (minutes < 0))
	{
		throw exception("Invalid value");
	}
	_minutes = minutes;
}

int Time::GetYear()
{
	return _year;
}

int Time::GetMonth()
{
	return _month;
}

int Time::GetDay()
{
	return _day;
}

int Time::GetHour()
{
	return _hour;
}

int Time::GetMinutes()
{
	return _minutes;
}