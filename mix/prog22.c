/*
 * Given a point (x, y), write a program to find out if it lies on the
 * x-axis, y-axis or at the origin, viz. (0, 0).
 */

 #include <stdio.h>

 int main(void)
 {
 	int x, y;

 	puts("Enter the point (x, y) -->");
 	scanf("%i %i", &x, &y);

 	if (x == 0 && y == 0)
 	{
 		puts("Point is on origin");
 	}
 	else if (x == 0)
 	{
 		puts("Point is on y-axis");
 	}
 	else if (y == 0)
 	{
 		puts("Point is on x-axis");
 	}
 	else
 	{
 		puts("Point is on quadrent");
 	}
 	
 	return 0;
 }