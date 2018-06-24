/* array of pointers */

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int *ptr[5];
	int i;

	a = 1;
	b = a * 2;
	c = b * 2;
	d = c * 2;
	e = d * 2;

	// storing the addresses in pointer array
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	*(ptr + 3) = &d;
	*(4 + ptr) = &e;

	// displaying the integer values through int*  
	for (i = 0; i < 5; i++)
	{
		printf("variable[%d] = %d\n", i, **(ptr + i));
	}

	printf("sizeof int *[5] is %lu bytes\n", sizeof(ptr));

	return 0;
}