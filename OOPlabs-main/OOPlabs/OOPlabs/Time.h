#pragma once
class Time
{
private:
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minutes;
public:
	Time();
	Time(int year, int month, int day, int hour, int minutes);

	void SetYear(int year);
	void SetMonth(int month);
	void SetDay(int day);
	void SetHour(int hour);
	void SetMinutes(int minutes);

	int GetYear();
	int GetMonth();
	int GetDay();
	int GetHour();
	int GetMinutes();
};