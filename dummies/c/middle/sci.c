// floating-point and scientific notation

#include <stdio.h>

#define BIG 2468000000000.0
#define TEENSY 0.00000000095731

int main(void)
{
	puts("Using %f: ");
	printf("BIG %f\t TEENSY %.20f\n", BIG, TEENSY);
	
	puts("Using %E: ");
	printf("BIG %e\t TEENSY %E\n", BIG, TEENSY);
	
	puts("Using %G: ");
	printf("BIG %G\t TEENSY %g\n", BIG, TEENSY);

	return 0;
}