#include <stdio.h>
#include <string.h>

int main(void)
{
   char str[50];
   char rev_str[50];
   int i, j;

   printf("Enter any string: ");
   scanf("%[^\n]", str);            // read all the characters ecxept '\n'

   for (i = 0, j = strlen(str) - 1; j >= 0; i++, j--)
   {
      rev_str[i] = str[j];
   }
   rev_str[i] = '\0';   // To mark the end of the string

   printf("The reversal of '%s' is '%s'\n", str, rev_str);

   return 0;
}
