// effect of wrong argument count and type

#include <stdio.h>

int main(void)
{
	int m = 4;
	int n = 5;
	float f = 72.35f;
	double d = 8.123;

	printf("%d, %d\n", m);
	printf("%d, %d, %d\n", m, n, f);	
	printf("%d %f %#x \n", d, f, d);
	printf("%hd %lu %lu \n", d, f, n);


	return 0;
}
