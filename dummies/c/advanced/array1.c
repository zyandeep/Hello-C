#include <stdio.h>

void show_array(int *pa, int size);
void mod_array(int *pa, int size);

int main(void)
{
	int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};

	puts("Original array...");
	show_array(primes, 8);

	mod_array(primes, 8);

	puts("Modified array...");
	show_array(primes, 8);

	return 0;
}


void show_array(int *pa, int size)
{
	int i;
	
	for (i = 1; i <= size; ++i, ++pa)
	{
		printf("Element %d : %d\n", i-1, *pa);
	}
}

// this function modified the array by doubling the each element
void mod_array(int *pa, int size)
{
	int i;
	
	for (i = 1; i <= size; ++i, ++pa)
	{
		*pa *= 2;
	}
}