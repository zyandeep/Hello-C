#include <stdio.h>

int main(void)
{
   int num, is_prime = 1;
   int i;

   printf("Enter a number: ");
   scanf("%d", &num);

   if (num == 1 || num <= 0)
      is_prime = 0;

   for (i = 2; i <= (num / 2); i++)
   {
      if (num % i == 0)
      {
         is_prime = 0;
         break;
      }
   }

   if (is_prime == 1)
      printf("%d is prime\n", num);
   else
      printf("%d is not prime\n", num);

   return 0;
}
