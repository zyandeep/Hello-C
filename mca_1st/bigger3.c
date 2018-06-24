// WAP to find the biggest of three numbers using nested if-else

#include <stdio.h>

int main(void)
{
  int num1, num2, num3, big;

  printf("Enter three numbers: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  if (num1 > num2)
  {
    if (num1 > num3)
      big = num1;
    else
      big = num3;
  }
  else
  {
    if (num2 > num3)
      big = num2;
    else
      big = num3;
  }

  printf("The biggest number is = %d\n", big);

  return 0;
}
