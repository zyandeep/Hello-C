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

   printf("The reverse no is %d\n", rev_num);

   if (num == rev_num)
   {
      printf("Since %d = %d\n", num, rev_num);
      printf("%d is a palindrom number\n", num);
   }
   else
   {
      printf("Since %d != %d\n", num, rev_num);
      printf("%d is not a palindrom number\n", num);
   }
   return 0;
}
