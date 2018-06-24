#include <stdio.h>

int main(void)
{
   char str[50];
   char my_char;
   int count = 0, i = 0;

   printf("Enter any string: ");
   fgets(str, 50, stdin);
   printf("Enter the character you want to search: ");
   scanf("%c", &my_char);

   while(str[i] != '\0')
   {
      if (str[i] == my_char)
         count++;
      i++;
   }

   printf("\nNo. of times %c has occured is %d\n", my_char, count);
   return 0;
}
