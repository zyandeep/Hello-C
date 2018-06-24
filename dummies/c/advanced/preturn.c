#include <stdio.h>

int* greatest(int a, int b, int c);

int main(void)
{
	int *p;

	p = greatest(5, 29, 12);	
	printf("The greatest value is %d\n", *p);
	
	return 0;
}


int* greatest(int a, int b, int c)
{
	int *p;

	if (a > b && a > c)
	{
		p = &a;
	}
	else if (b > a && b > c)
	{
		p = &b;
	}
	else
	{
		p = &c;
	}

	return p;
}