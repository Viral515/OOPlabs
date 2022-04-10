#include "Song.h"

Song::Song()
{
	_name = "Song";
	_time = 180;
	_genre = Rock;
}

Song::Song(string name, int time, Genre genre) 
{
	_name = name;
	_time = time;
	_genre = genre;
}

void Song::SetName(string name)
{
	_name = name;
}

void Song::SetTime(int time)
{
	if (time < 0)
	{
		throw exception("Invalid value.");
	}
	_time = time;
}

void Song::SetGenre(Genre genre)
{
	_genre = genre;
}

string Song::GetName()
{
	return _name;
}

int Song::GetTime()
{
	return _time;
}

Genre Song::SetGenre()
{
	return _genre;
}