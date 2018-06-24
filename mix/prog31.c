/*
	The policy followed by a company to process customer orders
is given by the following rules:
	(a) If a customer order is less than or equal to that in stock
and has credit is OK, supply has requirement.
	(b) If has credit is not OK do not supply. Send him
intimation.
	(c) If has credit is Ok but the item in stock is less than has
order, supply what is in stock. Intimate to him data the
balance will be shipped.

Write a C program to implement the company policy.
*/

#include <stdio.h>

int main(void)
{
	int order, stock;
	char credit;

	puts("Enter customer credit status [o/n] -->");
	credit = getchar();
	puts("Enter customer order amount -->");
	scanf("%i", &order);
	puts("Enter stock available -->");
	scanf("%i", &stock);

	if (credit == 'n')
	{
		puts("credit is not OK");
	}
	else if (order <= stock)
	{
		puts("your requirement will be shipped soon");
	}
	else
	{
		printf("%d will be shipped\n", stock);
		printf("balance = %d will be shipped soon\n", order - stock);
	}
	

	return 0;
}	