// float and double in C
// float and double use

#include <stdio.h>

int main(void)
{
	float fl = 324.234;
	double dl = 23.134E-6;
	long double ldl = -1223.34e-10;

	printf("%f can be written as %E \n", fl, fl);
	printf("%f can be written as %e \n", dl, dl);
	printf("%Lf can be written as %Le \n", ldl, ldl);

	printf("%i can be written as %#x \n", 20, 20);

	return 0;
}
