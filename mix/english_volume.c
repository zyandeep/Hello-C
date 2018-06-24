/* english system for fuild volume */

#include <stdio.h>
#define ONE_PINT_IN_CUPS 2
#define ONE_CUP_IN_OUNCE 8
#define ONE_OUNCE_IN_TABLESPOON 2
#define ONE_TABLESPOON_IN_TEASPOON 3

int main(void)
{
	float cup_input;
	float pints, ounce, tablespoon, teaspoon;

	pints = ounce = tablespoon = teaspoon = 0.0f;

	printf("Enter volume in cups: ");
	scanf("%f", &cup_input);

	pints = cup_input / 2;
	ounce = cup_input * 8;
	tablespoon = ounce * 2;
	teaspoon = tablespoon * 3;

	printf("\t%.2f cups = \n", cup_input);
	printf("%.2f pints\n", pints);
	printf("%.2f ounce\n", ounce);
	printf("%.2f tablespoon\n", tablespoon);
	printf("%.2f teaspoon\n", teaspoon);

	return 0;
}