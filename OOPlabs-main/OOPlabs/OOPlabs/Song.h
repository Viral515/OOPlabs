#pragma once
#include <iostream>
#include <string>
#include "Genre.h"

using namespace std;

class Song
{
private:
	string _name;
	int _time;
	Genre _genre;

public:
	Song();
	Song(string name, int time, Genre genre);

	void SetName(string name);
	void SetTime(int time);
	void SetGenre(Genre genre);

	string GetName();
	int GetTime();
	Genre SetGenre();
};