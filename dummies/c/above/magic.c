// Manupulating 2-D array --- a grid

#include <stdio.h>

#define ROW 3
#define COL 3
#define SIZE 8

int main(void)
{
	int array[ROW][COL] = {
		{8, 1, 6},
		{3, 5, 7},
		{4, 9, 2}
	};

	int i, j;
	int sum[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0};

	puts("Presenting the magic square -- ");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%d ", array[i][j]);
		}
		putchar('\n'); 
	}

	// sum of the rows
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			sum[i] += array[i][j]; 
		}

		printf("Sum of %d row is %d\n", i + 1, sum[i]); 
	}

	// sum of the cols
	for (i = 0; i < COL; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			sum[i + 3] += array[j][i]; 
		}

		printf("Sum of %d column is %d\n", i + 1, sum[i + 3]); 
	}

	// sum of NW/SE diagonel
	for (i = 0; i < ROW; i++)
	{
		sum[6] += array[i][i]; 
	}
	printf("Sum of NW/SE diagonel is %d\n", sum[6]); 

	// sum of NE/SW diagonel
	for (i = 0, j = COL - 1; i < ROW; i++, j--)
	{
		sum[7] += array[i][j];
	}
	printf("Sum of NE/SW diagonel is %d\n", sum[7]);

	return 0;
} 