#include <stdio.h>

int main(void)
{
   int num, num_bk;
   int sum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   num_bk = num;

   while( num_bk > 0 )
   {
      sum = sum + num_bk % 10;
      num_bk = num_bk / 10;
   }

   printf("The sum of the digits of %d is %d\n", num, sum);

   return 0;
}
