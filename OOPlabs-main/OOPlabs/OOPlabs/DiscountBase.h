#pragma once
#include "Product.h"
#include "CategoryType.h"

class DiscountBase
{
	CategoryType _category;

	void SetCategory(CategoryType category);

protected:
	DiscountBase(CategoryType category);

public:
	virtual float CalculateDiscount(Product* product) = 0;
	CategoryType GetCategory();
};