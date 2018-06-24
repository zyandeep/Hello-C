/*
 * Given the length and breadth of a rectangle, write a program to
 * find whether the area of the rectangle is greater than its
 * perimeter. For example, the area of the rectangle with length = 5
 * and breadth = 4 is greater than its perimeter.
 */

 #include <stdio.h>

 int main(void)
 {
 	float length, breadth;
 	float area = 0, perimeter = 0;

 	puts("Enter the length and breadth -->");
 	scanf("%f %f", &length, &breadth);

 	area = length * breadth;
 	perimeter = 2 * (length + breadth);

 	if (area > perimeter)
 	{
 		puts("Area is greater than perimeter");
 	}
 	else 
 	{
 		puts("Perimeter is greater than area");
 	}
 	
 	return 0;
 }