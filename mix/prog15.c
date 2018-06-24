/*
 * Any integer is input through the keyboard. Write a program to
 * find out whether it is an odd number or even number.
 */

#include <stdio.h>

int main()
{
	int number = 0;

	puts("Enter an integer -->");
	scanf("%i", &number);

	if (number % 2)
	{
		printf("%i is odd number.\n", number);
	}
	else 
	{
		printf("%i is even number.\n", number);	
	}

	return 0;
}