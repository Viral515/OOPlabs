#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int _id;
	int _yearOfAdmission;

public:
	Student();
	Student(string name, string surname, string patronymic, int id, int yearOfAdmission);

	void SetId(int id);
	void SetYearOfAdmission(int yearOfAdmission);

	int GetId();
	int GetYearOfAdmission();
};