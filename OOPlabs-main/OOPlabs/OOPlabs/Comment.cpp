#include "Comment.h"

Comment::Comment()
{
	_author = "Pyshkin";
	_text = "Hello";
}

Comment::Comment(string author, string text)
{
	_author = author;
	_text = text;
}

void Comment::SetAuthor(string author)
{
	_author = author;
}

void Comment::SetText(string text)
{
	_text = text;
}

string Comment::GetAuthor()
{
	return _author;
}

string Comment::GetText()
{
	return _text;
}