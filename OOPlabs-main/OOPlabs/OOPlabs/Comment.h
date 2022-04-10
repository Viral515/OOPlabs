#include <string>

using namespace std;

class Comment
{
private:
	string _author;
	string _text;

public:
	Comment();
	Comment(string author, string text);

	void SetAuthor(string author);
	void SetText(string text);

	string GetAuthor();
	string GetText();
};