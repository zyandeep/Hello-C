#include <stdio.h>

#define SIZE 10

int* odd(void);

int main(void)
{
	int *pa;
	int i;

	pa = odd();

	for (i = 1; i <= SIZE; ++i, ++pa)
	{
		printf("Element %d : %d\n", i-1, *pa);
	}

	return 0;
}

int* odd(void)
{
	static int array[SIZE];
	int i;

	// fill the array
	for (i = 0; i < SIZE; ++i)
	{
		array[i] = 2 * i + 1;
	}

	return array;
}