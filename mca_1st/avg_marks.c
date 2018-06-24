#include <stdio.h>

int main(void)
{
   float avg_mark;
   int array[30], i, sum = 0;;

   printf("\nEnter the marks of 30 students: ");
   for (i = 0; i < 30; i++)
   {
      scanf("%d", &array[i]);

      // calulating the sum of all the marks right away...
      sum = sum + array[i];
   }

   // calculating the average mark
   avg_mark = sum / 30.0;
   printf("\nThe average mark is = %.2f", avg_mark);
   printf("\nBelow are the marks that're greater than the average mark...\n");

   for (i = 0; i < 30; i++)
      if (array[i] > avg_mark)
         printf("%d\n", array[i]);

   return 0;
}
