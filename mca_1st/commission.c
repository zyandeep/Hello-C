#include <stdio.h>

int main(void)
{
   float commission;
   int sales_amt;

   printf("Enter the sales amount: ");
   scanf("%d", &sales_amt);

   // if we put 5/100 rather than 5.0/100, the division would be integer
   // division and the result would be 0
   
   if (sales_amt <= 500)
      commission = sales_amt * (5.0 / 100);
   else if (sales_amt <= 2000)
      commission = 35 + (sales_amt - 500) * (10.0 / 100);
   else if (sales_amt <= 5000)
      commission = 125 + (sales_amt - 2000) * (12.0 / 100);
   else
      commission = sales_amt * (12.5 / 100);

   printf("The required commission is = %.2f\n", commission);

   return 0;
}
