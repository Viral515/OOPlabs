#pragma once
#include <iostream>
#include "CategoryType.h"

using namespace std;

class Product
{
private:
	string _title;
	float _cost;
	CategoryType _category;

public:
	Product(string title, float cost, CategoryType category);

	void SetTitle(string title);
	void SetCost(float cost);
	void SetCategory(CategoryType category);

	string GetTitle();
	float GetCost();
	CategoryType GetCategory();
};