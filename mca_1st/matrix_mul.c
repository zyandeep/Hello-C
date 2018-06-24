#include <stdio.h>
#define ROW 50
#define COL 50

int main(void)
{
	int row_1, col_1, row_2, col_2;
	int i, j, k;
	int m1[ROW][COL], m2[ROW][COL], m3[ROW][COL];

	puts("Matrix multiplication...");
	puts("Enter the order of the 1st matrix--");
	printf("ROW: ");
	scanf("%d", &row_1);
	printf("COLUMN: ");
	scanf("%d", &col_1);
	puts("Enter the order of the 2nd matrix--");
	printf("ROW: ");
	scanf("%d", &row_2);
	printf("COLUMN: ");
	scanf("%d", &col_2);

	if (col_1 != row_2)
	{
		printf("Error: col_1 must be equal to row_2\n");
		puts("Aborting the program...");
		return 1;
	}
	printf("Now, enter the 1st %dX%d matrix...\n", row_1, col_1);
	for (i = 0; i < row_1; i++)
	{
	   for (j = 0; j < col_1; j++)
	   {
	      scanf("%d", &m1[i][j]);
	   }
	}
	printf("Enter the 2nd %dX%d matrix...\n", row_2, col_2);
	for (i = 0; i < row_2; i++)
	{
	   for (j = 0; j < col_2; j++)
	   {
	      scanf("%d", &m2[i][j]);
	   }
	}

	/* Outer-most loop will continue until row_1
		Outer loop will continue until col_2
			Inner loop will continue until row_2 or col_1 */

	for (i = 0; i < row_1; i++)
	{
		for (j = 0; j < col_2; j++)
		{
			m3[i][j] = 0;

			for (k = 0; k < col_1; k++)
			{
				m3[i][j] = m3[i][j] + ( m1[i][k] * m2[k][j] );	
			}
		}
	}

	puts("The resultant matrix is...");
	for (i = 0; i < row_1; i++)
	{
	   for (j = 0; j < col_2; j++)
	   {
	      printf("%d ", m3[i][j]);
	   }
	   puts("");
	}

	return 0;
}