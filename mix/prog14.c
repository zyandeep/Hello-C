/*
 * If cost price and selling price of an item is input through the
 * keyboard, write a program to determine whether the seller has
 * made profit or incurred loss. Also determine how much profit
 * he made or loss he incurred.
 */


#include <stdio.h>

int main()
{
	float cost_price = 0, selling_price = 0, prof_loss = 0;

	puts("Enter cost price and selling price -->");
	scanf("%f %f", &cost_price, &selling_price);

	if (selling_price > cost_price)
	{
		prof_loss = selling_price - cost_price;

		printf("His profit is = %.2f\n", prof_loss);
	}
	else
	{
		prof_loss = cost_price - selling_price;

		printf("His loss is = %.2f\n", prof_loss);
	}

	return 0;
}