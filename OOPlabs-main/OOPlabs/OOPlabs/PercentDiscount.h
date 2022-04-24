#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
	float _percent;

public:
	PercentDiscount(CategoryType category, float percent);

	float CalculateDiscount(Product* product) override;

	void SetPercent(float percent);

	float GetPercent();
};