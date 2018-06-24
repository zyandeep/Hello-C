/*
	Function defination
	date: 08-09-2015
*/

#include <stdio.h>
#include <hfcal.h>

void display_data( float weight, float distance, float coeff)
{
	printf("Weight: %3.2f lbs\n", weight);
	printf("Distance: %3.2f miles\n", distance);
	printf("Calories burned: %4.2f cal\n", coeff * weight * distance);
}