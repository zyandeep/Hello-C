// standard math library functions of C

#include <stdio.h>
#include <math.h>

int main(void)
{
	double sqrt2;
	double pow3;

	sqrt2 = sqrt(2.);
	pow3 = pow(2., 3.);

	printf("Square root of 2 = %f\n", sqrt2);
	printf("cube of 2 = %f\n", pow3);

	return 0;
}