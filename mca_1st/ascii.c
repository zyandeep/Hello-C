// WAP to get a character and print its ACII value

#include <stdio.h>

int main(void)
{
  char my_char;

  printf("\nEnter a character: ");
  scanf("%c", &my_char);

  printf("\nYou enterd = %c\n", my_char);
  printf("\nASCII value of %c is = %d\n", my_char, my_char);

  return 0;
}
