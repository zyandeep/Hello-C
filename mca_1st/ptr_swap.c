#include <stdio.h>

int main(void)
{
	int a = 10, b = 17, temp;
	int *ptr_a, *ptr_b;

	ptr_a = &a;
	ptr_b = &b;

	puts("Before the swaping...");
	printf("a = %d, b = %d\n", a, b);

	temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;

	puts("After the swaping...");
	printf("a = %d, b = %d\n", a, b);

	return 0;
}