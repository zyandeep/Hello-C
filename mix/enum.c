/*	
	struct, union and enum	
	date: 31-08-2014
*/

#include <stdio.h>

typedef enum 
{
	COUNT, POUNDS, PINTS
} unit_of_mesuare;


typedef union 
{	
	short count;
	float weight;
	float volume;	
} quantity;


typedef struct 
{	
	const char *name;
	const char *country;
	quantity amount;
	unit_of_mesuare units;	
} fruit_order;


void display(fruit_order order);


int main(void)
{
	fruit_order apple = {"apples", "England", .amount.count = 144, .units = COUNT};
	fruit_order strawberries = {"strawberries", "Spain", .amount.weight = 17.6, POUNDS};
	fruit_order oj = {"orange juice", "U.S.A", .amount.volume = 10.5, PINTS};

	display(apple);
	display(strawberries);
	display(oj);

	return 0;
}


void display(fruit_order order)
{
	fputs("This order contains...", stdout);

	if (order.units == PINTS)
	{
		printf("%2.2f pints of %s\n", order.amount.volume, order.name);		
	}
	else if (order.units == POUNDS)
	{
		printf("%2.2f lbs of %s\n", order.amount.weight, order.name);	
	}
	else
	{
		printf("%i %s\n", order.amount.count, order.name);
	}
		
}