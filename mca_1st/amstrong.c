#include <stdio.h>

int main(void)
{
   int num, num_bkp;
   int digit, sum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   num_bkp = num;

   while( num_bkp > 0 )
   {
      digit = num_bkp % 10;
      sum = sum + (digit * digit * digit) ;
      num_bkp = num_bkp / 10;
   }

   if (sum == num)
      printf("%d is an amstrong number\n", num);
   else
      printf("%d isn't an amstrong number\n", num);

   return 0;
}
