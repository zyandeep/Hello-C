// WAP to show the use of arithmatic operators in C

#include <stdio.h>

int main(void)
{
  int num1, num2;

  printf("Enter any two numbers: ");
  scanf("%d%d", &num1, &num2);

  printf("The Addition is = %d\n",num1 + num2);
  printf("The Difference is = %d\n",num1 - num2);
  printf("The Multiplication is = %d\n",num1 * num2);
  printf("The Division is = %d\n",num1 / num2);
  printf("The Modulus is = %d\n",num1 % num2);

  return 0;
}
