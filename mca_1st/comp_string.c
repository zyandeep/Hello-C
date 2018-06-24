#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[50], str2[50];
   int compare_value;

   printf("Enter a sting: ");
   fgets(str1, 50, stdin);
   printf("Enter another one: ");
   fgets(str2, 50, stdin);

   // to remove the '\n'
   str1[strlen(str1) - 1] = '\0';
   str2[strlen(str2) - 1] = '\0';

   compare_value = strcmp(str1, str2);

   if(compare_value == 0)
      printf("\n'%s' and '%s' are identical", str1, str2);
   else if(compare_value > 0)
      printf("\n'%s' is alphabatically greater than '%s'", str1, str2);
   else
      printf("\n'%s' is alphabatically smaller than '%s'", str1, str2);

   puts("");
   return 0;
}
