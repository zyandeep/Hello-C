/*
 * If the three sides of a triangle are entered through the
 * keyboard, write a program to check whether the triangle is
 * valid or not. The triangle is valid if the sum of two sides is
 * greater than the largest of the three sides.
 */

#include <stdio.h>


void is_valid(int side1, int side2, int large_side); 


int main(void)
{
	int side1, side2, side3;
	int large_side = 0;
	
	puts("Enter the three sides -->");
	scanf("%i %i %i", &side1, &side2, &side3);

	// for equileteral triangle
	if (side1 == side2 && side1 == side3)
	{
		puts("Its a valid equilateral triangle");
	}
	else
	{
		if(side1 > side2)
		{
			if (side1 > side3)
			{
				is_valid(side2, side3, side1);
			}
			else if (side1 == side3)
			{
				is_valid(side3, side2, side1);
				// is_valid(side1, side2, side3);
			}
			else
			{
				is_valid(side1, side2, side3);
			}

		}
		else if (side1 == side2)
		{
			if (side1 > side3)
			{
				is_valid(side2, side3, side1);
				// is_valid(side1, side3, side2);
			}
			else 
			{
				is_valid(side1, side2, side3);   
			}
		}
		else
		{
			if (side2 > side3)
			{
				is_valid(side1, side3, side2);
			}
			else if (side2 == side3)
			{
				is_valid(side3, side1, side2);
				// is_valid(side2, side1, side3);

			}
			else
			{
				is_valid(side1, side2, side3);
			}

		}

	}

	return 0;
}


void is_valid(int side1, int side2, int large_side)
{
	if (side1 + side2 > large_side)
	{
		puts("Valid triangle");
	}
	else 
	{
		puts("Invalid triangle");
	}
}