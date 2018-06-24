/* 
	Visualising 3-D array --- arrays of GRID stuff togather back-to-back

		grid [GRID] [ROW] [COL] --> grid [1] [1] [1]
*/

#include <stdio.h>

#define GRID 3
#define ROW 3
#define COL 3

int main(void)
{
	int r, c, g;

	int array[GRID][ROW][COL] = {
		{
			1, 2, 3,
			4, 5, 6,
			7, 8, 9
		},

		{
			11, 12, 13,
			14, 15, 16,
			17, 18, 19
		},

		{
			21, 22, 23,
			24, 25, 26,
			27, 28, 29
		}
	};

	puts("Printing the element of the 3D array...");

	for (g = 0; g < GRID; g++)
	{
		printf("\n %d grid elemets...", g + 1);

		for (r = 0; r < ROW; r++)
		{
			printf("\n\t");

			for (c = 0; c < COL; c++)
			{
				printf("%d ", array[g][r][c]);
			}
		}
	}

	putchar('\n');

	return 0;
} 