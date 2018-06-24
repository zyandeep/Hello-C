#include <stdio.h>

int main(void)
{
   int n, big, i;
   int array[50];

   printf("\nEnter how many numbers you want to compare: ");
   scanf("%d", &n);

   printf("Enter %d numbers...\n", n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
   }

   big = array[0];

   for (i = 1; i < n; i++)
   {
      if (array[i] > big)
      {
         big = array[i];
      }
   }

   printf("\nThe biggest number is = %d\n", big);

   return 0;
}
