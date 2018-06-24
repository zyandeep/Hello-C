#include <stdio.h>

#define SIZE 10

int main(void)
{
	int array[SIZE];
	int *ptr [SIZE];
	int i, j;
	int *temp;

	puts("Enter ten numbers: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("#%d ", i + 1);
		scanf("%i", (array + i));
		*(ptr + i) = (array + i);

	}

	// sorting using selectioin sort
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (**(ptr + i) > **(ptr + j))
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}

	puts("\nPress [Enter] to sort the array -- ");
	getchar();

	printf("\nHere they are in sorted order: \n");
	printf("%-10s | %10s\n", "Original", "Sorted");
	puts("--------------------------------------------------");
	for (i = 0; i < SIZE; i++)
	{
		printf("%-10d | %10d\n", *(array + i), **(ptr + i));	
	}

	return 0;
} 