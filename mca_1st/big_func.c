/* Write a function to find the biggest of given three values and use it to find the total
marks obtained by a student which in turn is the sum of the best of three test scores and 
best of three assignment scores */

#include <stdio.h>

int main(void)
{
	int t1, t2, t3, a1, a2, a3, total = 0;
	int big(int a, int b, int c);

	printf("Enter the test scores: ");
	scanf("%d%d%d", &t1, &t2, &t3);
	printf("Enter the assignment scores: ");
	scanf("%d%d%d", &a1, &a2, &a3);

	total = big(t1, t2, t3) + big(a1, a2, a3);

	printf("Total marks = %d\n", total);

	return 0;
}

int big(int a, int b, int c)
{
	if(a > b)
	{
		if(a > c)
			return a;
		else
			return c;
	}
	else
	{
		if(b > c)
			return b;
		else
			return c;
	}
}