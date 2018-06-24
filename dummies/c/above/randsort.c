// selection sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

int main(void)
{
	int array[SIZE];
	int i, j, temp;

	srandom( (unsigned int) time(NULL));

	puts("Here is the unsorted array -- ");
	for (i = 0; i < SIZE; i++)
	{
		array[i] = (int) random() % 100 + 1;
		printf("%i ", array[i]); 
	}

	// sorting using selectioin sort
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	puts("\nPress [Enter] to sort the array -- ");
	getchar();

	for (i = 0; i < SIZE; i++)
	{
		printf("%i ", array[i]); 
	}

	putchar('\n');

	return 0;
} 