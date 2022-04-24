#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	string _post;

public:
	Teacher();
	Teacher(string name, string surname, string patronymic, string post);

	void SetPost(string post);

	string GetPost();
};