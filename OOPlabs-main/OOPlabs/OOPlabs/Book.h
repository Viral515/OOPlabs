#pragma once
#include <string>
using namespace std;

struct Book
{
	string Name;
	int ReleaseYear;
	int PagesCount;
	string* Authors;
	int AuthorsCount;
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
int FindBookByAuthor(Book* books, int booksCount, string author);