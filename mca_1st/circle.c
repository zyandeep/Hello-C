// WAP to find the diameter, area and circumference of a circle

#include <stdio.h>

int main(void)
{
  float radius;
  float diameter = 0.0;
  float area = 0.0, circum = 0.0;

  printf("\nEnter the radius of the circle: ");
  scanf("%f", &radius);

  diameter = 2 * radius;
  area = 3.14 * (radius * radius);
  circum = 2 * 3.14 * radius;

  printf("\nThe diameter is = %.2f\n", diameter);
  printf("\nThe area is = %.2f\n", area);
  printf("\nThe circumference is = %.2f\n", circum);

  return 0;
}
