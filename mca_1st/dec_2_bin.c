#include <stdio.h>

int main(void)
{
   int number;
   char bin[50];
   int i = 0;

   printf("Enter a decimal no: ");
   scanf("%d", &number);

   while (number > 0)
   {
      bin[i] = number % 2;
      number /= 2;
      i++;
   }

   printf("The number in binary: \n");
   for (--i; i >= 0; i--)
   {
      printf("%d", bin[i]);
   }

   puts("");
   
   return 0;
}
