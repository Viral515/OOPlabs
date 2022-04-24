#pragma once
#include "DiscountBase.h"

class CertificateDiscount : public DiscountBase
{
	float _amount;

public:
	CertificateDiscount(CategoryType category, float amount);

	float CalculateDiscount(Product* product) override;

	void SetAmount(float amount);

	float GetAmount();
};