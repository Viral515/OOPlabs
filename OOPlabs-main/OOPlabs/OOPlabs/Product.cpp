#include "Product.h"

Product::Product(std::string title, float cost, CategoryType category)
{
	SetTitle(title);
	SetCost(cost);
	SetCategory(category);
}

void Product::SetTitle(std::string title)
{
	for (int i = 0; i < title.length(); i++)
	{
		if (!isalpha(title[i]) && !isdigit(title[i]))
		{
			throw exception("Invalid symbols in title.");
		}
	}
	_title = title;
}

void Product::SetCost(float cost)
{
	if (cost < 0 || cost > 100000)
	{
		throw exception("Invalid cost value.");
	}
	_cost = cost;
}

void Product::SetCategory(CategoryType category)
{
	_category = category;
}


string Product::GetTitle()
{
	return _title;
}

float Product::GetCost()
{
	return _cost;
}

CategoryType Product::GetCategory()
{
	return _category;
}