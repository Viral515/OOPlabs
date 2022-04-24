#include "PersonInfo.h"
#include <iostream>

void PersonInfo::ShowName(Person* person)
{
	cout << person->GetName() << " " << person->GetSurname()
		<< " " << person->GetPatronymic() << endl;
}