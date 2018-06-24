#include <stdio.h>
#define SIZE 7

int main(void)
{
   int array[SIZE], i, j, temp;

   printf("\nEnter 7 numbers...\n");
   for (i = 0; i < SIZE; i++)
   {
      scanf("%d", &array[i]);
   }

   printf("\nBefore the reversal...\n");
   for (i = 0; i < SIZE; i++)
   {
      printf("%d ", array[i]);
   }

   // The array reversal logic
   for (i = 0, j = SIZE - 1; i < j; i++, j--)
   {
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
   }

   printf("\nAfter the reversal...\n");
   for (i = 0; i < SIZE; i++)
   {
      printf("%d ", array[i]);
   }

   puts("");
   return 0;
}
