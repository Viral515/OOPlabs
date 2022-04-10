#pragma once
#include <iostream>
#include <string>
#include "Song.h"

using namespace std;

class Album
{
private:
	string _name;
	int _releaseYear;
	Song* _songs;
	int _songsCount;

public: 
	Album();
	Album(string name, int releaseYear, Song* songs, int songsCount);

	void SetName(string name);
	void SetReleaseYear(int releaseYear);
	void SetSongs(Song* songs, int songsCount);

	string GetName();
	int GetReleaseYear();
	Song* GetSongs();
	int GetSongsCount();
};