#include "Band.h"

Band::Band()
{
	_name = "Band";
	_information = "Zero";
	_albums = new Album[10];
	_albumsCount = 1;
}

Band::Band(string name, string information, Album* albums, int albumsCount)
{
	_name = name;
	_information = information;
	_albums = albums;
	_albumsCount = albumsCount;
}

void Band::SetName(string name)
{
	_name = name;
}

void Band::SetInformation(string information)
{
	_information = information;
}

void Band::SetAlbums(Album* albums, int albumsCount)
{
	_albums = albums;
	if ((albumsCount < 0) || (albumsCount > 10))
	{
		throw exception("Invalid value");
	}
	_albumsCount = albumsCount;
}

string Band::GetName()
{
	return _name;
}

string Band::GetInformation()
{
	return _information;
}

Album* Band::GetAlbums()
{
	return _albums;
}

int Band::GetAlbumsCount()
{
	return _albumsCount;
}


Song* Band::FindSong(string songTitle)
{
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		Song* songs = _albums[i].GetSongs();
		for (int j = 0; j < _albums[i].GetSongsCount(); j++)
		{
			if (songs[j].GetName() == songTitle)
			{
				return &songs[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		Song* songs = _albums[i].GetSongs();
		for (int j = 0; j < _albums[i].GetSongsCount(); j++)
		{
			if (songs[j].GetName() == song->GetName())
			{
				return &_albums[i];
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllSongs(int& allSongsCount)
{
	int counter = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		counter += _albums[i].GetSongsCount();
	}

	Song* songs = new Song[counter];

	int index = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		for (int j = 0; j < _albums[i].GetSongsCount(); j++)
		{
			songs[index] = _albums->GetSongs()[j];
			index++;
		}
	}
	allSongsCount = counter;
	return songs;
}