#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int number, number_bkp, rev_num = 0;
   char is_negative = 0, digit; 

   printf("Enter an integer number: ");
   scanf("%d", &number);

   number_bkp = number;

   if (number == 0)
   {
      printf("The digits of %d in words...\n", number);
      puts("Zero");
   }
   else
   {
      if(number < 0)
      {
         is_negative = 1;
         number_bkp = abs(number_bkp);
      }

      while(number_bkp > 0)
      {
         rev_num *= 10;
         rev_num += number_bkp % 10;
         number_bkp /= 10;
      }

      printf("The digits of %d in words...\n", number);
      
      if(is_negative)
         printf("Minus ");
      
      while (rev_num > 0)
      {
         digit = rev_num % 10;

         switch (digit)
         {
            case 0:
               printf("Zero ");
               break;
            case 1:
               printf("One ");
               break;
            case 2:
               printf("Two ");
               break;
            case 3:
               printf("Three ");
               break;
            case 4:
               printf("Four ");
               break;
            case 5:
               printf("Five ");
               break;
            case 6:
               printf("Six ");
               break;
            case 7:
               printf("Seven ");
               break;
            case 8:
               printf("Eight ");
               break;
            case 9:
               printf("Nine ");
         }

         rev_num /= 10;
      }

      puts("");

   } 

   return 0;
}