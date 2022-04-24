#pragma once
#include <iostream>

using namespace std;

class User
{
private:
	int _id;
	string _login;
	string _password;
	void SetId(int id);

protected:
	void SetLogin(string login);

public:
	User(int id, string login, string password);

	void SetPassword(string password);

	int GetId();
	string GetLogin();
	string GetPassword();

	bool IsCorrectPassword(string password);
};