#include "Person.h"

Person::Person()
{
	_name = "Ivan";
	_surname = "Ivanov";
	_patronymic = "Ivanovich";
}

Person::Person(string name, string surname, string patronymic)
{
	_name = name;
	_surname = surname;
	_patronymic = patronymic;
}

void Person::SetName(string name)
{
	_name = name;
}

void Person::SetSurname(string surname)
{
	_surname = surname;
}

void Person::SetPatronymic(string patronymic)
{
	_patronymic = patronymic;
}

string Person::GetName()
{
	return _name;
}

string Person::GetSurname()
{
	return _surname;
}

string Person::GetPatronymic()
{
	return _patronymic;
}