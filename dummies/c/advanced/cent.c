#include <stdio.h>

#define SIZE 10

int main(void)
{
	int cent[SIZE];
	int i;
	int *ptr = cent;

	// filling the array with pointer
	for (i = 0; i < SIZE; i++)
	{
		*(ptr + i) = (i + 1) * 100;
		// ptr++;
	}

	// rewind the pointer
	// ptr -= SIZE;

	// displaying the array with pointer
	for (i = 0; i < SIZE; i++)
	{
		++*ptr;
		printf("cent[%d] = %d\n", i, *ptr++);
	}
	
	return 0;
}