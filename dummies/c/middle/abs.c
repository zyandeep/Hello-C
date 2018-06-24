// standard math library functions of C

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int number;
	float f;

	printf("Enter an integer: ");
	scanf("%i", &number);
	printf("Enter a floating-point number: ");
	scanf("%f", &f);


	// printf("square root of %i is %f\n", number, sqrt( abs(number) ));

	printf("square root of %i is %f\n", number, sqrt( number < 0 ? -number : number ));
	printf("square root of %f is %f\n", f, sqrt( fabs(f) ));

	return 0;
}