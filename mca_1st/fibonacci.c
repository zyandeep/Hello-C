#include <stdio.h>

int main(void)
{
	int a = 0, b = 1, c;
	int count = 3;

	printf("First five fibonacci numbers are...\n");
	printf("%d %d ", a, b);

	while(count <= 5)
	{
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
		count++;
	}

	puts("");
	return 0;
}