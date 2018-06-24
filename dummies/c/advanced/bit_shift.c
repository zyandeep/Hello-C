/* 
	Multiply a number by 10 using left-shift operator
	Multiply a number by 15 using left-shift operator
	
	64	32	16	8	4	2	1

 */

#include <stdio.h>

int main(void)
{
	int number;
	int v2, v4, v8, v16, result;

	printf("Enter an integer value: ");
	scanf("%i", &number);
	
	v16 = number << 4;
	v8 = number << 3;
	v4 = number << 2;
	v2 = number << 1;

	// multiply by 7
	result = v2 + v4 + number;
	printf("%d * 7 = %d\n", number, result);

	// multiply by 15
	result = v2 + v4 + v8 + number;
	printf("%d * 15 = %d\n", number, result);
	
	// multiply by 18
	result = v2 + v16;
	printf("%d * 18 = %d\n", number, result);

	// multiply by 20
	result = v4 + v16;
	printf("%d * 20 = %d\n", number, result);

	return 0;
}
