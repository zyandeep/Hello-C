// selection sort

#include <stdio.h>

#define SIZE 6

int main(void)
{
	int array[SIZE] = {10, 48, 1, 37, 6, 24};
	int i, j, temp;

	puts("The unsorted array -- ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%i\t", array[i]); 
	}

	// sorting using selectioin sort
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	puts("\nThe sorted array in descending order -- ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%i\t", array[i]); 
	}

	putchar('\n');

	return 0;
} 