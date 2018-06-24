// Add two numbers using pointer
#include <stdio.h>

int main(void)
{
	int num1, num2, sum;
	int *p_num1 = &num1, *p_num2 = &num2, *p_sum = &sum;

	printf("Enter a number: ");
	scanf("%d", p_num1);
	printf("Enter another number: ");
	scanf("%d", p_num2);

	*p_sum = *p_num1 + *p_num2;

	printf("%d + %d = %d\n", *p_num1, *p_num2, *p_sum);
	
	return 0;
}