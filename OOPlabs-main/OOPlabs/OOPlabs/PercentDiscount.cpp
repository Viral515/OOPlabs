#include "PercentDiscount.h"

PercentDiscount::PercentDiscount(CategoryType category, float percent) : DiscountBase(category)
{
	SetPercent(percent);
}

float PercentDiscount::CalculateDiscount(Product* product)
{
	if (product->GetCategory() == GetCategory())
	{
		return product->GetCost() * ((100.0f - GetPercent()) / 100.0f);
	}
	return product->GetCost();
}

void PercentDiscount::SetPercent(float percent)
{
	if (percent < 0 || percent > 100)
	{
		throw exception("Invalid percent value.");
	}
	_percent = percent;
}

float PercentDiscount::GetPercent()
{
	return _percent;
}