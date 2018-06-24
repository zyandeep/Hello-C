/*
	Nesting of struct to create complex data structure	
	date: 30-08-2014
*/

#include <stdio.h>

struct exercise
{
	const char *description;
	float duration;	
};

struct meal
{
	const char *ingredients;
	float weight;	
};

struct preferences
{
	struct meal food;
	struct exercise exercise;
};

typedef struct
{
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;	
} Fish;


void catalog(Fish);
void label(Fish);


int main(void)
{
	// typedef struct Fish Fish;

	Fish snappy = {"Snappy", "Piranha", 69, 4, 
							{{"meat", 0.2}, {"swim in the jacuzzi", 7.5}}};

	// catalog(snappy);
	label(snappy);
	
	return 0;
}


void catalog(Fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.age, f.teeth);
}


void label(Fish f)
{
	printf("Name: %s\n", f.name);
	printf("Species: %s\n", f.species);
	printf("%i years old, %i teeth\n", f.age, f.teeth);
	printf("Feed with %.2f of %s and allow to %s for %.2f hours\n", 
			f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, 
			f.care.exercise.duration);
}