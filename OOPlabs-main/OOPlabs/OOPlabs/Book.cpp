#include "Book.h";
#include <iostream>

void DemoBook()
{
	const int bookCount = 2;
	Book books[bookCount];

	for (int i = 0; i < bookCount; i++)
	{
		ReadBookFromConsole(books[i]);
	}

	for (int i = 0; i < bookCount; i++)
	{
		WriteBookToConsole(books[i]);
	}

	cout << "Enter the finded author: ";
	string author;
	cin >> author;
	int bookId = FindBookByAuthor(books, bookCount, author);
	if (bookId != -1)
	{
		WriteBookToConsole(books[bookId]);
	}
	else
	{
		cout << "Not found." << endl;
	}
	system("pause");
}

void ReadBookFromConsole(Book& book)
{
	cout << "Enter the book name: ";
	cin >> book.Name;
	cout << "Enter the year of release: ";
	while (true)
	{
		cin >> book.ReleaseYear;
		if ((book.ReleaseYear > 0) && (book.ReleaseYear < 2022))
		{
			break;
		}
		else
		{
			cout << "Invalid value. Try again." << endl;
		}
	}
	cout << "Enter the count of pages: ";
	while (true)
	{
		cin >> book.PagesCount;
		if (book.PagesCount > 0)
		{
			break;
		}
		else
		{
			cout << "Invalid value. Try again." << endl;
		}
	}
	cout << "Enter the number of authors: ";
	while (true)
	{
		cin >> book.AuthorsCount;
		if ((book.AuthorsCount > 0) && (book.AuthorsCount < 11))
		{
			break;
		}
		else
		{
			cout << "Invalid value. Try again." << endl;
		}
	}
	book.Authors = new string[book.AuthorsCount];
	for (int i = 0; i < book.AuthorsCount; i++)
	{
		cout << "Enter the finded author " << i+1 << ':';
		cin >> book.Authors[i];
	}
}

void WriteBookToConsole(Book& book)
{
	cout << book.Authors[0];
	for (int i = 1; i < book.AuthorsCount; i++)
	{
		cout << ", " << book.Authors[i];
	}
	cout << ' ' << book.Name << ". " << book.ReleaseYear << ". - " << book.PagesCount << "p." << endl;
}

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].AuthorsCount; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}