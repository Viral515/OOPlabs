#include "IOProduct.h"
#include <iostream>

using namespace std;

void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
	int fullCost = 0;
	for (int i = 0; i < productsCount; i++)
	{
		cout << " " << products[i].GetTitle()
			<< "\tOld cost: " << products[i].GetCost()
			<< "\tNew cost: " << discount->CalculateDiscount(&products[i]) << '\n';
		fullCost += discount->CalculateDiscount(&products[i]);
	}
	cout << "Full cost with Discount: " << fullCost << endl;
}