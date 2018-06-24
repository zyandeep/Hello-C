// WAP to find the area of a triangle using the sides of the triangle

#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b, c, s, area;

  printf("Enter the three sides: ");
  scanf("%f%f%f", &a, &b, &c);

  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("The area is = %5.2f\n", area);

  return 0;
}
