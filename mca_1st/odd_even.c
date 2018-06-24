// WAP to check whether a number is even or odd using the conditional operator

#include <stdio.h>

int main(void)
{
  int number;

  printf( "Enter a number: " );
  scanf( "%d", &number );

  (number % 2 == 0) ? printf("%d is EVEN", number) : printf("%d is ODD", number);

  printf("\n");

  return 0;
}
