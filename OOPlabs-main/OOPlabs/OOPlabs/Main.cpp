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

#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "PersonInfo.h"

#include "User.h"
#include "PaidUser.h"
#include "UserTools.h"

#include "Product.h"
#include "IOProduct.h"
#include "PercentDiscount.h"
#include "DiscountBase.h"

using namespace std;

int main()
{
	/*GeometricProgram g1;

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
	
	//lab5 ex 5.1
	/*Person* person = new Person();
	Student* student = new Student();
	Teacher* teacher = new Teacher();

	PersonInfo p1;
	p1.ShowName(person);
	p1.ShowName(student);
	p1.ShowName(teacher);

	delete person;
	delete student;
	delete teacher;*/

	//lab5 ex 5.2
	/*try
	{
		User** users = new User * []
		{
				new User(100000, "morkovka1995", "1995morkovka"),
				new User(100001, "ilon_mask", "X æ A-12"),
				new User(100002, "megazver", "password"),
				new User(100003, "yogurt", "ksTPQzSu"),
		};
		User** paidUsers = new User * []
		{
				new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
				new PaidUser(200001, "system_exe", "UgfkDGmU"),
				new PaidUser(200002, "RazorQ", "TBgRnbCP"),
				new PaidUser(200003, "schdub", "CetyQVID"),
		};
		string login = "megazver";
		string password = "password";
		User* loginedUser = Login(users, 4, login, password);
		cout << "Signed in as: " << loginedUser->GetLogin() << endl;
		login = "system_exe";
		password = "UgfkDGmU";
		User* loginedPaidUser = Login(paidUsers, 4, login, password);
		cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;
		for (int i = 0; i < 4; i++)
		{
			delete users[i];
		}
		delete[] users;
		for (int i = 0; i < 4; i++)
		{
			delete paidUsers[i];
		}
		delete[] paidUsers;
	}
	catch (exception exception)
	{
		cerr << exception.what() << endl;
	}*/

	//lab5 ex 5.3
	try
	{
		Product* products = new Product[]
		{
			Product("LG49N000", 40'000, CategoryType::TV),
			Product("Q1", 2'000, CategoryType::Micromax),
			Product("M650", 8'000, CategoryType::Pantum),
			Product("LasetJet", 11'000, CategoryType::HP)
		};
		DiscountBase* discount1 = new PercentDiscount(CategoryType::TV, 25.0f);
		DiscountBase* discount2 = new PercentDiscount(CategoryType::Micromax, 25.0f);
		ShowCheckWithDiscount(discount1, products, 4);
		ShowCheckWithDiscount(discount2, products, 4);
	}
	catch (exception exception)
	{
		cerr << exception.what() << endl;
	}

	system("pause");
}