/*
 * Write a program to check whether a triangle is valid or not,
 * when the three angles of the triangle are entered through the
 * keyboard. A triangle is valid if the sum of all the three angles
 * is equal to 180 degrees.
 */

 #include <stdio.h>

 int main()
 {
 	int angle1, angle2, angle3;
 	int sum = 0;

 	puts("Enter the three angles -->");
 	scanf("%d %d %i", &angle1, &angle2, &angle3);

 	sum = angle1 + angle2 + angle3;

 	if (sum == 180)
 	{
 		puts("It's a valid triangle");

 	}
 	else
 	{
 		puts("It's not a valid triangle");
 	}

 	return 0;
 }