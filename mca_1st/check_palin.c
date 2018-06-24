#include <stdio.h>
#include <string.h>

int main(void)
{
   char str[50];
   int is_palin = 1, i, j;

   printf("Enter any string: ");
   scanf("%[^\n]", str);            // read all the characters ecxept '\n'
   // use gets() here

   for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
   {
      if( str[i] != str[j] )
      {
         is_palin = 0;
         break;
      }
   }

   if (is_palin == 1)
      puts("It's a palindrom string");
   else
      puts("It's not a palindrom string");

   return 0;
}
