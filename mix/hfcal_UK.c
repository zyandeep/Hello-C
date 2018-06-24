/*
	Function defination
	UK version
	date: 08-09-2015
*/

#include <stdio.h>
#include <hfcal.h>

void display_data( float weight, float distance, float coeff)
{
	printf("Weight: %3.2f kg\n", weight / 2.2046);
	printf("Distance: %3.2f km\n", distance * 1.609344);
	printf("Calories burned: %4.2f cal\n", coeff * weight * distance);
}