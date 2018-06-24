#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	puts("\n SIZE OF SIGNED DATA...");
	printf("The value of INT_MAX = %i\n", INT_MAX);
	printf("The value of INT_MIN = %i\n", INT_MIN);
	printf("An integer takes %li bytes\n", sizeof(int));

	printf("The value of CHAR_MAX = %i\n", CHAR_MAX);
	printf("The value of CHAR_MIN = %i\n", CHAR_MIN);
	printf("A character takes %li bytes\n", sizeof(char));

	printf("The value of FLT_MAX = %f\n", FLT_MAX);
	printf("The value of FLT_MIN = %f\n", FLT_MIN);
	printf("A floating-point takes %li bytes\n", sizeof(float));

	printf("The value of DBL_MAX = %lf\n", DBL_MAX);
	printf("The value of DBL_MIN = %lf\n", DBL_MIN);
	printf("A double takes %li bytes\n", sizeof(double));

	return 0;
}
