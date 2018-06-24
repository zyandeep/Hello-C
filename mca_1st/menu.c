#include <stdio.h>

int main(void)
{
   int num1, num2;
   int reply;

   printf("\n   M E N U\n****************\n\n");
   printf("1 -- For Addition\n");
   printf("2 -- For Subtraction\n");
   printf("3 -- For Multiplication\n");
   printf("4 -- For Division\n");
   printf("5 -- For Modulus/Remainder division\n");
   printf("Choose an operation: ");
   scanf("%d", &reply);

   switch (reply)
   {
      case 1:
         printf("\nEnter two numbers: ");
         scanf("%d%d", &num1, &num2);
         printf("\nPerforming Addition...");
         printf("\n%d + %d is = %d\n", num1, num2, num1 + num2);
         break;
      case 2:
         printf("\nEnter two numbers: ");
         scanf("%d%d", &num1, &num2);
         printf("\nPerforming Subtraction...");
         printf("\n%d - %d is = %d\n", num1, num2, num1 - num2);
         break;
      case 3:
         printf("\nEnter two numbers: ");
         scanf("%d%d", &num1, &num2);
         printf("\nPerforming Multiplication...");
         printf("\n%d * %d is = %d\n", num1, num2, num1 * num2);
         break;
      case 4:
         printf("\nEnter two numbers: ");
         scanf("%d%d", &num1, &num2);
         printf("\nPerforming Division...");
         printf("\n%d / %d is = %d\n", num1, num2, num1 / num2);
         break;
      case 5:
         printf("\nEnter two numbers: ");
         scanf("%d%d", &num1, &num2);
         printf("\nPerforming Modulus/Remainder division...");
         printf("\n%d %% %d is = %d\n", num1, num2, num1 % num2);
         break;
      default:
         printf("Invalid input: '%d' is not a valid option\n", reply);
         printf("Aborting program...\n");
   }

   return 0;
}
