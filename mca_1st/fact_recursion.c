#include <stdio.h>

int main(void)
{
	int number;
	long int factorial(int n);

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("Factorial of %d is %ld\n", number, factorial(number));
	return 0;
}

long factorial(int n)
{
	if(n == 1)
		return 1L;
	else
		return n * factorial(n - 1);
}