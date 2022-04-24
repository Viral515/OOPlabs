#include "Teacher.h"

Teacher::Teacher() : Person()
{
	_post = "Teacher";
}

Teacher::Teacher(string name, string surname, string patronymic, string post) : Person(name, surname, patronymic)
{
	_post = post;
}

void Teacher::SetPost(string post)
{
	_post = post;
}

string Teacher::GetPost()
{
	return _post;
}