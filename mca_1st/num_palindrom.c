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

   if (num == rev_num)
      printf("%d is a palindrom\n", num);
   else
      printf("%d is not a palindrom\n", num);

   return 0;
}
