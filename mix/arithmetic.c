#include <stdio.h>

int main()
{

	int num1, num2, result;
	
	num1 = 20;
	num2 = 10;
	result = num1 + num2;
	printf("sum = %d\n", result);
	
	result = num1 - num2;
	printf("sub = %d\n", result);
	
	result = num1 * num2;
	printf("mul = %d\n", result);

	result = num1 / num2;
	printf("div = %d\n", result);
	
	num1 = 10;
	num2 = 20;
	printf("div = %f\n", (float)num1 / num2);
	
	num2 = 3;
	result = num1 % num2;
	printf("mod = %d\n", result);
	
	
	// post increment/decrement operator
	num1 = 20;
	num1++ ;
	printf("increment operator = %d\n", num1);
	
	num1 += 5;
	printf("increment operator = %d\n", num1);
	
	num1-- ;
	printf("decrement operator = %d\n", num1);
	
	num1 -= 2;
	printf("decrement operator = %d\n", num1);
	
	
	// pre increment operator
	num2 = 50;
	
	++num2;
	printf("pre increment operator = %d\n", num2);
	
	--num2;
	printf("pre decrement operator = %d\n", num2);
	
	return 0;
}

