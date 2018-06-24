/*	
	Passing struct to a function by "value" and by "reference"
	date: 30-08-2014
*/

#include <stdio.h>

typedef struct 
{	
	const char *name;
	const char *species;
	int age;	
} turtle;


void happy_birthday(turtle t);
void pass_by_ref(turtle *t);


int main(void)
{
	turtle myrtle = {"Myrtle", "Letherback sea turtle ", 99};

	happy_birthday(myrtle);
	printf("%s age is now %i\n", myrtle.name, myrtle.age);

	pass_by_ref(&myrtle);
	printf("pass by ref --> %s age is now %i\n", myrtle.name, myrtle.age);

	return 0;
}


void happy_birthday(turtle t)
{
	t.age = t.age + 1;

	printf("Happy_birthday %s. You are now %i years old\n", t.name, t.age);
}


void pass_by_ref(turtle *t)
{
	(*t).age = (*t).age + 1;

	printf("Happy_birthday %s. You are now %i years old\n", t->name, t->age);	
}