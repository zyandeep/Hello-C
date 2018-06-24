#include <stdio.h>

int main(void)
{
	int num;
	int fact(int n);

	printf("Enter a number: ");
	scanf("%d", &num);

	printf( "%d! is %d\n", num, fact(num) );

	return 0;
}

int fact(int n)
{
	int i = 1, f = 1;

	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}

	return f;
}