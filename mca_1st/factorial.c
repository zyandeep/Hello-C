#include <stdio.h>

int main(void)
{
   int number, i;
   long int fact = 1;

   printf("Enter the number to calculate factorial: ");
   scanf("%d", &number);

   for (i = 1; i <= number; i++)
   {
      fact = fact * i;
   }

   printf("Factorial of %d is %ld\n", number, fact);

   return 0;
}
