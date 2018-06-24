/* 
	Visualising 3-D array --- arrays of grids stuff togather back-to-back

		grid [GRID] [ROW] [COL] --> grid [1] [1] [1]
*/

#include <stdio.h>

#define GRID 4
#define ROW 3
#define COL 10

int main(void)
{
	int r, g;

	char array[GRID][ROW][COL] = {
		{"Bob", "Bill", "Bret"},
		{"Dan", "Dave", "Don"},
		{"George", "Harry", "John"},
		{"Mike", "Steve", "Vern"}

	};

	puts("Printing the element of the 3D array...");

	for (r = 0; r < ROW; r++)
	{
		for (g = 0; g < GRID; g++)
		{
			printf("%s\n", array[g][r]);
		}
	}

	return 0;
} 