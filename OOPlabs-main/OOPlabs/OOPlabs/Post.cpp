#include "Post.h"

PostLab3::PostLab3()
{
	_title = "Post";
	_text = "Nothing";
	_comments = new Comment[10];
	_commentsCount = 1;
}

PostLab3::PostLab3(string title, string text, Comment* comments, int commentsCount)
{
	_title = title;
	_text = text;
	_comments = comments;
	_commentsCount = commentsCount;
}

void PostLab3::SetTitle(string title)
{
	_title = title;
}

void PostLab3::SetText(string text)
{
	_text = text;
}

void PostLab3::SetComments(Comment* comments)
{
	_comments = comments;
}

void PostLab3::SetCommentsCount(int commentsCount)
{
	if (commentsCount < 0)
	{
		throw exception("invalid value");
	}
	_commentsCount = commentsCount;
}

string PostLab3::GetTitle()
{
	return _title;
}

string PostLab3::GetText()
{
	return _text;
}

Comment* PostLab3::GetComments()
{
	return _comments;
}

int PostLab3::GetCommentsCount()
{
	return _commentsCount;
}