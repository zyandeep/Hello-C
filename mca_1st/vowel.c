#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char input;

   printf("Enter an alphabet : ");
   scanf("%c", &input);

   if (isalpha(input) == 0)
   {
      printf("Invalid input: '%c' is not an alphabet\n", input);
      printf("Aborting program...\n");

      return 1;
   }

   switch (input)
   {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
         printf("%c is a vowel\n", input);
         break;
      default:
         printf("%c is a consonant\n", input);

   }

   return 0;
}
