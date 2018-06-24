#include <stdio.h>

int main(void)
{
	int n;
	void fib(int a, int b, int count);

	printf("Enter the value of N: ");
	scanf("%d", &n);

	printf("The fibonacci sequence is ..\n");
	printf("0 1 ");

	fib(0, 1, (n - 2));

	puts("");
	return 0;
}

void fib(int a, int b, int count)
{
	if(count == 0)
		return;
	printf("%d ", a + b);

	fib(b, (a+b), --count);
}