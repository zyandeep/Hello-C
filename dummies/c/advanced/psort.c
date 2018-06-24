/* Sorting strings */

#include <stdio.h>
#include <string.h>

#define ROW 10
#define COL 20

int main(void)
{
	char fruit[ROW][COL];
	const char *pfruit[ROW];
	int i, j;
	const char *temp;

	puts("Enter ten fruit names: ");
	for (i = 0; i < ROW; i++)
	{
		printf("#%d ", i + 1);
		scanf("%s", fruit[i]);
		pfruit[i] = fruit[i];

	}

	// sorting using strcasecmp() and pointer array
	for (i = 0; i < ROW -1 ; i++)
	{
		for (j = i + 1; j < ROW; j++)
		{
			if ( strcasecmp( pfruit[i], pfruit[j] ) > 0 )
			{
				temp = pfruit[i];
				pfruit[i] = pfruit[j];
				pfruit[j] = temp;
			}
		}
	
	}

	printf("\nHere they are in sorted order: \n");
	printf("%-20s | %20s\n", "Original", "Sorted");
	puts("--------------------------------------------------");
	for (i = 0; i < ROW; i++)
	{
		printf("%-20s | %20s\n", fruit[i], pfruit[i]);	
	}

	return 0;
}