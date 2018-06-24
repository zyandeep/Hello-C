/*
 * If the three sides of a triangle are entered through the
 * keyboard, write a program to check whether the triangle is
 * isosceles, equilateral, scalene or right angled triangle.
 */

#include <stdio.h>


int is_isosceles(int side1, int side2, int side3); 
int is_equilateral(int side1, int side2, int side3);
int is_scalene(int side1, int side2, int side3);
int is_right_angled(int side1, int side2, int side3);


int main(void)
{
	int side1, side2, side3;
	
	puts("Enter the three sides -->");
	scanf("%i %i %i", &side1, &side2, &side3);

	if (is_equilateral(side1, side2, side3))
	{
		puts("its an equilateral");
	}	
	else if (is_isosceles(side1, side2, side3))
	{
		puts("its an isosceles");
		
		if (is_right_angled(side1, side2, side3))
			puts("its also a right-angled");
	}
	else if (is_scalene(side1, side2, side3))
	{
		puts("its a scalene");

		if (is_right_angled(side1, side2, side3))
			puts("its also a right-angled");
	}

	return 0;
}


int is_isosceles(int s1, int s2, int s3)
{
	if ((s1 == s2 && s1 != s3) || (s1 == s3 && s1 != s2) || (s2 == s3 && s2 != s1))
		return 1;
	else
		return 0;
}

int is_scalene(int s1, int s2, int s3)
{
	if (s1 != s2 && s1 != s3 && s2 != s3)
		return 1;
	else
		return 0;
}

int is_equilateral(int s1, int s2, int s3)
{
	if (s1 == s2 && s1 == s3)
		return 1;
	else
		return 0;
}

int is_right_angled(int s1, int s2, int s3)
{
	if ((s1 * s1 + s2 * s2 == s3 * s3) || (s2 * s2 + s3 * s3 == s1 * s1) || 
		(s3 * s3 + s1 * s1 == s2 * s2))
	{
		return 1;
	}
	else
		return 0;
}