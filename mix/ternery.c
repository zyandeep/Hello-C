#include <stdio.h>

int main (void)
{
	int age = 15;
	int value = 0;

	value = (age >= 18) ? puts("you are an adult") : puts("you are a minor");
	
	printf("value of the expression is : %i\n", value);

	return 0;
}