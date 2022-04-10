#include <string>
#include "Comment.h"

using namespace std;

class Post
{
private:
	string _title;
	string _text;
	Comment* _comments;
	int _commentsCount;

public:
	Post();
	Post(string title, string text, Comment* comments, int commentsCount);

	void SetTitle(string title);
	void SetText(string text);
	void SetComments(Comment* comments);
	void SetCommentsCount(int commentsCount);

	string GetTitle();
	string GetText();
	Comment* GetComments();
	int GetCommentsCount();
};