/* union in C */

#include <stdio.h>

#define CENT_PER_INCH 2.54f

int main(void)
{
	typedef union
	{
		float centimeter;
		int inch;
	} measure;

	measure you;
	measure paul;

	paul.inch = 70;

	printf("Paul is %d inch tall.\n", paul.inch);
	printf("How tall are you inch: ");
	scanf("%i", &you.inch);

	paul.centimeter = paul.inch * CENT_PER_INCH;
	you.centimeter = you.inch * CENT_PER_INCH;

	/*printf("You are %.2f centimeter tall.\n", you.centimeter);
	printf("Paul is %.2f centimeter tall.\n", paul.centimeter);*/

	printf("You are %d centimeter tall.\n", you.inch);
	printf("Paul is %d centimeter tall.\n", paul.inch);

	return 0;
}
