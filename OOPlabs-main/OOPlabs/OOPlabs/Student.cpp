#include "Student.h"

Student::Student() : Person()
{
	_id = 000000;
	_yearOfAdmission = 2022;
}

Student::Student(string name, string surname, string patronymic, int id, int yearOfAdmission) : Person (name, surname, patronymic)
{
	_id = id;
	_yearOfAdmission = yearOfAdmission;
}

void Student::SetId(int id)
{
	if (id > 999999)
	{
		throw exception("Invalid id.");
	}
	_id = id;
}

void Student::SetYearOfAdmission(int yearOfAdmission)
{
	if (yearOfAdmission > 2022 || yearOfAdmission < 1900)
	{
		throw exception("Invalid year of admission.");
	}
	_yearOfAdmission = yearOfAdmission;
}

int Student::GetId()
{
	return _id;
}

int Student::GetYearOfAdmission()
{
	return _yearOfAdmission;
}