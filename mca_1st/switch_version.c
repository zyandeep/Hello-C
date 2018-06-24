#include <stdio.h>
#include <math.h>

int main(void)
{
   float x, y;
   int n;

   printf("Enter the value of x: ");
   scanf("%f", &x);
   printf("Enter the value of n: ");
   scanf("%d", &n);

   switch (n)
   {
      case 1:
         y = 1 + x;
         break;
      case 2:
         y = 1 + x / n;
         break;
      case 3:
         y = 1 + pow(x, n);
         break;
      default:
         y = 1 + n * x;
   }

   printf("Value of y(%.2f, %d) = %f\n", x, n, y);

   return 0;
}
