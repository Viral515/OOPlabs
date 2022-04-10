#include "Post.h"

Post::Post()
{
	_title = "Post";
	_text = "Nothing";
	_comments = new Comment[10];
	_commentsCount = 1;
}

Post::Post(string title, string text, Comment* comments, int commentsCount)
{
	_title = title;
	_text = text;
	_comments = comments;
	_commentsCount = commentsCount;
}

void Post::SetTitle(string title)
{
	_title = title;
}

void Post::SetText(string text)
{
	_text = text;
}

void Post::SetComments(Comment* comments)
{
	_comments = comments;
}

void Post::SetCommentsCount(int commentsCount)
{
	if (commentsCount < 0)
	{
		throw exception("invalid value");
	}
	_commentsCount = commentsCount;
}

string Post::GetTitle()
{
	return _title;
}

string Post::GetText()
{
	return _text;
}

Comment* Post::GetComments()
{
	return _comments;
}

int Post::GetCommentsCount()
{
	return _commentsCount;
}