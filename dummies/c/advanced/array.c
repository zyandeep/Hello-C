#include <stdio.h>

void show_array(int *pa);

int primes[6];

int main(void)
{
	primes[0] = 2; 
	primes[1] = 3;
	primes[2] = 5;
	primes[3] = 7;
	primes[4] = 11;
	primes[5] = 13;

	show_array(primes);
	// show_array( &primes[0] );

	return 0;
}


void show_array(int *pa)
{
	int i;
	int size =  sizeof(primes) / sizeof(int);

	printf("sizeof primes[]: %lu bytes\n", sizeof(primes));
	printf("sizeof *pa: %lu bytes\n", sizeof(pa));

	for (i = 1; i <= size; ++i, ++pa)
	{
		printf("Element %d : %d\n", i-1, *pa);
	}
}