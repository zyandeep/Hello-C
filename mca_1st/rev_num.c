#include <stdio.h>

int main(void)
{
   int num, num_bk;
   int mod, rev_num = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   num_bk = num;

   while( num_bk > 0 )
   {
      mod = num_bk % 10;
      rev_num = rev_num * 10;
      rev_num = rev_num + mod;
      num_bk = num_bk / 10;
   }

   printf("Reverse of %d is %d\n", num, rev_num);

   return 0;
}
