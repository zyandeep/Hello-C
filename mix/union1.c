/*	
	Example of designated initialisers with struct and union
	date: 30-08-2014
*/

#include <stdio.h>


typedef union 
{
	int count;
	float weight;
	float volume;		
} quantity;


typedef struct 
{
	const char *name;
	const char *country;
	quantity amount;
} fruit_order;


// void happy_birthday(turtle t);
// void pass_by_ref(turtle *t);


int main(void)
{
	fruit_order apples = {"Apples", "England", {.weight = 4.2}};

	// fruit_order apples = {"Apples", "England", .amount.weight = 4.2}};

	printf("The order from %s contains %.2f lb of %s\n", apples.country, apples.amount.weight, 
			apples.name); 


	/*order o = {.country = "England"};
	printf("country = %s\n", o.country);


	// ony the first field is inisialised.
	// quantity q = {20};

	// designated initialisers
	quantity q = {.volume = 3.7};
	q.weight = 2.50;

	printf("count = %i\n", q.count);
	printf("weight = %.2f\n", q.weight);
	printf("volume = %.2f\n", q.volume);
*/


	return 0;
}


/*void happy_birthday(turtle t)
{
	t.age = t.age + 1;

	printf("Happy_birthday %s. You are now %i years old\n", t.name, t.age);
}


void pass_by_ref(turtle *t)
{
	(*t).age = (*t).age + 1;

	printf("Happy_birthday %s. You are now %i years old\n", t->name, t->age);	
}*/