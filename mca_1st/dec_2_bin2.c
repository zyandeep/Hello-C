#include <stdio.h>

int main(void)
{
   float user_input, flt_part = 0.0, flt_bkp;
   int int_part = 0, int_bkp;
   char int_part_bin[50], flt_part_bin[50];
   int i = 0, j = 0;

   printf("Enter a decimal no: ");
   scanf("%f", &user_input);

   if (user_input < 0)
   {
      printf("Error: The decimal no. MUST be +ve\n");
      puts("Aborting the program...");
      return 1;
   }
   else if (user_input == 0)
   {
      printf("The binary eqiuvalent of decimal %f is %s\n", user_input, "0.0");
   }
   else
   {
      // seperate the integer and the float part of the input
      int_part = user_input;
      int_bkp = int_part;
      flt_part = user_input - int_part;
      flt_bkp = flt_part;

      // convert the integral part into binary
      for(i = 0; int_part > 0; i++)
      {
         int_part_bin[i] = int_part % 2;
         int_part /= 2;
      }

      // convert the float part into binary
      for(j = 0; flt_part != 0 && j < 6; j++)
      {
         flt_part = flt_part * 2;
         flt_part_bin[j] = flt_part;
         flt_part -= flt_part_bin[j];
      }

      printf("The binary equivalent of decimal %f is -- \n", user_input);

      if (int_bkp == 0)
         printf("0");
      else
      {
         for (--i; i >= 0; i--)
         {
            printf("%d", int_part_bin[i]);
         }
      }

      printf("%c", '.');

      if ( flt_bkp == 0.0)
         printf("0");
      else
      {
         for (i = 0; i < j; i++)
         {
            printf("%d", flt_part_bin[i]);
         }
      }

   }

   puts("");
   return 0;
}