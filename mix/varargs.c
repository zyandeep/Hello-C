/*
	Quick sort using standard C library
	date: 06-09-2015
*/

#include <stdio.h>
#include <stdarg.h>

enum drink 
{
	MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
};


double price(enum drink d);
double total_price(int args, ...);
void print_data(int total, ...);


int main(void)
{
	printf("Price is %.2f\n", total_price(2, MONKEY_GLAND, MUDSLIDE));
	printf("Price is %.2f\n", total_price(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
	printf("Price is %.2f\n", total_price(1, ZOMBIE));
	printf("Price is %.2f\n", total_price(4, ZOMBIE, MONKEY_GLAND, FUZZY_NAVEL, MUDSLIDE));

	puts("......................................");

	print_data(2, 22.21, 50.2);
	print_data(3, 12.20, 21.40, 70.34);
	print_data(1, 92.54);

	return 0;
}



double price(enum drink d)
{
	switch (d)
	{
		case MUDSLIDE:
			return 6.79;

		case FUZZY_NAVEL:
			return 5.31;

		case MONKEY_GLAND:
			return 4.82;

		case ZOMBIE:
			return 5.89;
	}
}


// how to create a varagrs function to read same-type parameters
double total_price(int args, ...)
{
	int i;
	double total_cost = 0;

	va_list drink;
	va_start(drink, args);
	
	// read the arguments 
	for (i = 0; i < args; i++)
	{
		total_cost += price( va_arg(drink, enum drink) );
	}

	va_end(drink);
	
	return total_cost;
}


// how to create a varagrs function to read different-type parameters
void print_data(int total, ...)
{
	int i;
	va_list item;
	va_start(item, total);

	for (i = 0; i < total; i++)
	{
		printf("%.2lf\n", va_arg(item, double));
	}

	va_end(item);
}