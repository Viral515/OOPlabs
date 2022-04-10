#include <iostream>
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Band.h"
#include "IOBand.h"
#include "IOFlight.h"
#include "IORectangle.h"
#include "Ring.h"
#include "IORing.h"
#include "IOCollisionManager.h"
#include "GeometricProgram.h"

#include "Post.h"

using namespace std;

int main()
{
	GeometricProgram g1;

	//DemoBook();
	//DemoRoute();
	try
	{
		//DemoRectangleWithPoint();
		//DemoFlightWithTime();
		//DemoBand();
	}
	catch (exception exception)
	{
		cerr << exception.what() << endl;
	}

	int actionNumber = 1;
	
	while (true)
	{
		cout << "Enter number of action" << endl;
		cin >> actionNumber;
		switch (actionNumber)
		{
		case 1:
		{
			g1.DemoRectangle();
			break;
		}
		case 2:
		{
			g1.DemoRing();
			break;
		}
		case 3:
		{
			g1.DemoCollision();
			break;
		}
		default:
		{
			break;
		}
		}
	}
	
	/*
	Post* posts = new Post[5];
	for (int i = 0; i < 5; i++)
	{
		Post newPost;
		string title;
		cout << "Enter the title: ";
		cin >> title;
		newPost.SetTitle(title);
		string text;
		cout << "Enter the text: ";
		cin >> text;
		newPost.SetText(text);

		Comment* comments = new Comment[3];
		for (int j = 0; j < 3; j++)
		{
			string author;
			cout << "Enter the author: ";
			cin >> author;
			comments[j].SetAuthor(author);
			string text;
			cout << "Enter the text of comment: ";
			cin >> text;
			comments[j].SetText(text);

		}
		newPost.SetComments(comments);
		newPost.SetCommentsCount(3);

		posts[i] = newPost;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Author of comment: " << posts[i].GetComments()[j].GetAuthor() <<
				"Text of comment: " << posts[i].GetComments()[j].GetText() << endl;
		}
	}
	*/

	system("pause");
}