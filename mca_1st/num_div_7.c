#include <stdio.h>

int main(void)
{
   int i;

   for (i = 1; i <= 50; i++)
   {
      if (i % 10 == 1)
         puts("");

      printf("%d ", i * 7);
   }

   puts("");
   
   return 0;
}
