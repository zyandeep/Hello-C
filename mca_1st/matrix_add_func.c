#include <stdio.h>
#define ROW 50
#define COL 50

int main(void)
{
   int m1[ROW][COL], m2[ROW][COL];
   int row, col, i, j;

   void add_matrix(int p1[][COL], int p2[][COL], int r, int c);

   printf("Enter the order of the matrix you want to add..\n ");
   printf("ROW: ");
   scanf("%d", &row);
   printf("COLUMN: ");
   scanf("%d", &col);
   printf("Now, enter the 1st %dX%d matrix...\n", row, col);
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         scanf("%d", &m1[i][j]);
      }
   }
   printf("Enter the 2nd %dX%d matrix...\n", row, col);
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         scanf("%d", &m2[i][j]);
      }
   }

   add_matrix(m1, m2, row, col);

   return 0;
}

void add_matrix(int p1[][COL], int p2[][COL], int r, int c)
{
   int i, j;

   printf("\n The matrix addition is...\n");
   for (i = 0; i < r; i++)
   {
      for (j = 0; j < c; j++)
      {
         printf("%d ", p1[i][j] + p2[i][j]);
      }
      puts("");
   }

}