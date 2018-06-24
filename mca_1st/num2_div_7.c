#include <stdio.h>

int main(void)
{
   int n, i;

   printf("\nEnter the value of N:");
   scanf("%d", &n);



   for (i = 1; i <= n; i++)
   {
      if (i % 7 != 0)
         printf("%d ", i);

      if(i % 10 == 0)
         puts("");
   }

   puts("");

   return 0;
}
