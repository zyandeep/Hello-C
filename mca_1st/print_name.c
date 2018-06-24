#include <stdio.h>

int main(void)
{
   int count, i;
   char name[30];

   printf("Enter your name: ");
   if( *(fgets(name, 29, stdin)) == '\n' )
   {
      printf("\nYour name can't be empty!");
      printf("\nAborting program...\n");
      return 0;
   }

   printf("Enter the number of times: ");
   scanf("%d", &count);

   for (i = 1; i <= count; i++)
   {
      printf("%s", name);
   }

   return 0;
}
