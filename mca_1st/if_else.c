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

   if (n == 1)
      y = 1 + x;
   else if (n == 2)
      y = 1 + x / n;
   else if (n == 3)
      y = 1 + pow(x, n);
   else
      y = 1 + n * x;

   printf("Value of y(%.2f, %d) = %f\n", x, n, y);

   return 0;
}
