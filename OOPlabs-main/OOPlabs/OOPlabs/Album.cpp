#include "Album.h"

Album::Album()
{
	_name = "Name";
	_releaseYear = 1999;
	_songs = new Song[10];
	_songsCount = 1;
}

Album::Album(string name, int releaseYear, Song* songs, int songsCount)
{
	_name = name;
	_releaseYear = releaseYear;
	_songs = songs;
	_songsCount = songsCount;
}

void Album::SetName(string name)
{
	_name = name;
}

void Album::SetReleaseYear(int releaseYear)
{
	if (releaseYear < 0)
	{
		throw exception("Invalid value.");
	}
	_releaseYear = releaseYear;
}

void Album::SetSongs(Song* songs, int songsCount)
{
	_songs = songs;
	if ((songsCount < 0) || (songsCount > 10))
	{
		throw exception("Invalid value");
	}
	_songsCount = songsCount;
}

string Album::GetName()
{
	return _name;
}

int Album::GetReleaseYear()
{
	return _releaseYear;
}

Song* Album::GetSongs()
{
	return _songs;
}

int Album::GetSongsCount()
{
	return _songsCount;
}