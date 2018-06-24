#include <stdio.h>

int main(void)
{
   int n, sum = 0, i;
   int array[50];

   printf("\nEnter how many numbers you want to add: ");
   scanf("%d", &n);

   printf("Enter %d numbers...\n", n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
      sum += array[i];
   }

   printf("\nThe sum is = %d\n", sum);

   return 0;
}
