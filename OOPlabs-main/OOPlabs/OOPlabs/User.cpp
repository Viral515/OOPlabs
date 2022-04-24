#include "User.h"
#include <cctype> // для функции isalpha

void User::SetId(int id)
{
	_id = id;
}

void User::SetLogin(string login)
{
	for (int i = 0; i < login.length(); i++)
	{
		if (!isalpha(login[i]) && !isdigit(login[i]) && (login[i] != '_'))
		{
			cout << login[i] << endl;
			throw exception("Invalid symbols in login");
		}
	}
	_login = login;
}

void User::SetPassword(string password)
{
	_password = password;
}

int User::GetId()
{
	return _id;
}

string User::GetLogin()
{
	return _login;
}

string User::GetPassword()
{
	return _password;
}

User::User(int id, string login, string password)
{
	SetId(id);
	SetLogin(login);
	SetPassword(password);
}

bool User::IsCorrectPassword(string password)
{
	return (password == _password);
}