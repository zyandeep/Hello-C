/* Program no : 5
 * 
 * The length & breadth of a rectangle and radius of a circle are
 * input through the keyboard. Write a program to calculate the
 * area & perimeter of the rectangle, and the area &
 * circumference of the circle.
 */

#include <stdio.h>
#define PI 3.14

int main()
{
	float len, bre, rad;
	float area_r = 0, parm_r = 0, area_c = 0, cirum = 0;
	
	puts("Enter the length, breath and radius -->");
	scanf("%f %f %f", &len, &bre, &rad);
	
	// for the ractangle
	area_r = len * bre;
	parm_r = 2 * (len + bre);
	
	// for the circle
	area_c = PI * rad * rad;
	cirum = 2 * PI * rad;
	
	printf("Area of ractengle = %.2f\n", area_r); 
	printf("Parimeter of ractengle = %.2f\n", parm_r);
	printf("Area of circle = %.2f\n", area_c); 
	printf("Circumference of ractengle = %.2f\n", cirum); 
	
	return 0;
}