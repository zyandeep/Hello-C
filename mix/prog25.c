/*
* A certain grade of steel is graded according to the following
* conditions:
	(i) Hardness must be greater than 50
	(ii) Carbon content must be less than 0.7
	(iii) Tensile strength must be greater than 5600

* The grades are as follows:
	Grade is 10 if all three conditions are met
	Grade is 9 if conditions (i) and (ii) are met
	Grade is 8 if conditions (ii) and (iii) are met
	Grade is 7 if conditions (i) and (iii) are met
	Grade is 6 if only one condition is met
	Grade is 5 if none of the conditions are met

* Write a program, which will require the user to give values of
* hardness, carbon content and tensile strength of the steel 
* under consideration and output the grade of the steel.
*/

#include <stdio.h>

int main(void)
{
	int hardness, t_strength;
	float carbon;

	puts("Enter the value of hardness, tensile-strength and carbon-content -->");
	scanf("%i %i %f", &hardness, &t_strength, &carbon);

	if (hardness > 50 && carbon < 0.7 && t_strength > 5600)
	{
		puts("Grade 10");
	}
	else if (hardness > 50 && carbon < 0.7)
	{
		puts("Grade 9");
	}
	else if (carbon < 0.7 && t_strength > 5600)
	{
		puts("Grade 8");
	}
	else if (hardness > 50 && t_strength > 5600)
	{
		puts("Grade 7");
	}
	else if (hardness > 50 || carbon < 0.7 || t_strength > 5600)
	{
		puts("Grade 6");
	}
	else 
	{
		puts("Grade 5");
	}

	return 0;
}