#include "IOBand.h"

void DemoBand()
{
	Band band;
	band.SetName("Nirvana");
	Album* albums = new Album[3];
	for (int i = 0; i < 3; i++)
	{
		Album newAlbum = Album();
		Song* songs = new Song[4];
		songs[0] = Song();
		songs[1] = Song();
		songs[2] = Song();
		songs[3] = Song();
		newAlbum.SetSongs(songs, 4);
		albums[i] = newAlbum;
	}
	band.SetAlbums(albums, 3);

	Song* newSong = new Song();
	cout << band.FindSong("Song")->GetName() << endl;
	cout << band.FindAlbum(newSong)->GetName() << endl;
	int allSongsCount = 0;
	Song* songsArray = band.GetAllSongs(allSongsCount);
	cout << "Songs count: " << allSongsCount << endl;
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << i << ": " << songsArray[i].GetName() << endl;
	}

	system("pause");
}