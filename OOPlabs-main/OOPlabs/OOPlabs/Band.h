#pragma once
#include <iostream>
#include <string>
#include "Album.h"

using namespace std;

class Band
{
private:
	string _name;
	string _information;
	Album* _albums;
	int _albumsCount;

public:
	Band();
	Band(string name, string information, Album* albums, int albumsCount);

	void SetName(string name);
	void SetInformation(string information);
	void SetAlbums(Album* albums, int albumsCount);

	string GetName();
	string GetInformation();
	Album* GetAlbums();
	int GetAlbumsCount();

	Song* FindSong(string songTitle);
	Album* FindAlbum(Song* song);
	Song* GetAllSongs(int& allSongsCount);
};