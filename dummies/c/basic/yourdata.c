/*
	text to integer --> atoi();
	text to float --> atof(); 

	1 year = 12 months
	1 in = 2.2 cm
*/

#include <stdio.h>
#include <stdlib.h>	

int main(void)
{
	char input[20];
	int age;
	float height;

	printf("Enter your age in years: ");
	fgets(input, 20, stdin);
	age = atoi(input);

	// age = age * 12;

	printf("Enter your height in inch: ");

	height = atof(fgets(input, 20, stdin));

	// height = height * 2.2;

	printf("Your are %i months old\n", age);
	printf("and %f cm tall\n", height);

	return 0;
}