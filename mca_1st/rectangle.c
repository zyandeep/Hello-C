// WAP to find the area and perimeter of a rectangle

#include <stdio.h>

int main(void)
{
  float length, width;
  float perimeter = 0.0, area = 0.0;

  printf("\nEnter the length of the rectangle: ");
  scanf("%f", &length);
  printf("\nEnter the width of the rectangle: ");
  scanf("%f", &width);

  area = length * width;
  perimeter = 2 * (length + width);

  printf("\nThe area is = %.2f\n", area);
  printf("\nThe perimeter is = %.2f\n", perimeter);

  return 0;
}
