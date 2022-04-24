#include "CertificateDiscount.h"

CertificateDiscount::CertificateDiscount(CategoryType category,float amount) :
	DiscountBase(category)
{
	SetAmount(amount);
}

float CertificateDiscount::CalculateDiscount(Product* product)
{
	if (product->GetCategory() == GetCategory())
	{
		float discountAmount = GetAmount();
		float productCost = product->GetCost();
		float difference = abs(productCost - discountAmount);
		if (productCost <= discountAmount)
		{
			SetAmount(discountAmount - productCost);
			return 0.0f;
		}
		else
		{
			SetAmount(0.0f);
			return productCost - discountAmount;
		}
	}
	return product->GetCost();
}

void CertificateDiscount::SetAmount(float amount)
{
	if (amount < 0 || amount > 100)
	{
		throw exception("Invalid amount value.");
	}
	_amount = amount;
}

float CertificateDiscount::GetAmount()
{
	return _amount;
}