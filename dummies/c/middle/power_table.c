// standard math library functions of C

#include <stdio.h>
#include <math.h>

int main(void)
{
	/*int exponent = 0;
	double ans;

	for (exponent = 0; exponent <= 10; exponent++)
	{
		ans = pow(5.0, (double) exponent);
		printf("5 to the %d power is %f\n", exponent, ans);
	}*/

	/*double cube root1, cube root2;

	cube root1 = cube root(5.0);
	cube root2 = pow(5.0, 0.5);

	if (cube root1 == cube root2)
		puts("they both are the same");
	else
		puts("computer thinks both are different");
*/

	// printf("cube root of -16 is %f", cube root(-16.0));

	/*printf("cube root of 2 is %f\n", cbrt(2));
	printf("cube root of 8 is %f\n", cbrt(8));
	printf("cube root of -27 is %f\n", cbrt(-27));

	printf("cube root of 8 using pow() is %f\n", pow(8.0, (1.0/3)));*/

	printf("natural log of 2 is %f\n", log(2.0));
	printf("10-base log of 2 is %f\n", log10(2.0));	

	return 0;
}