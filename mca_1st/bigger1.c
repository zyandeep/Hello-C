// WAP to find the bigger of two numbers

#include <stdio.h>

int main(void)
{
  int num1, num2, big;

  printf( "Enter two numbers: " );
  scanf( "%d%d", &num1, &num2 );

  if (num1 > num2)
  {
    big = num1;
  }
  else
  {
    big = num2;
  }

  printf( "The bigger number is = %d\n", big );

  return 0;
}
