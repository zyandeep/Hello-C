/*
	Use of user-defined data type struct

	date: 30-08-2014
*/

#include <stdio.h>

struct Fish
{
	const char *name;
	const char *species;
	int teeth;
	int age;	
};


void catalog(struct Fish);
void label(struct Fish);


int main(void)
{
	struct Fish snappy = {"Snappy", "Pirhana", 69, 4};

	catalog(snappy);
	label(snappy);
	
	return 0;
}


void catalog(struct Fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.age, f.teeth);
}


void label(struct Fish f)
{
	printf("Name: %s\n Species: %s\n. No of teeth: %i\n Age: %i", 
		   f.name, f.species, f.age, f.teeth);
}


