#include <stdio.h>

int main(void)
{
	// check if a letter is lowercase or uppercase using bitmask
	char my_character = ' ';
	
	puts("Enter a character---> ");
	my_character =  getchar();

	/*
	// to express a binary number use 0b
	if (my_character & 0b00100000)
	{
		puts("It's a lowercase letter");
	}
	else {
		puts("It's an uppercase letter");	
	}
	*/

	// to express a hexadecimal number use 0x or 0X
	if (my_character & 0x20)
	{
		puts("It's a lowercase letter");
	}
	else {
		puts("It's an uppercase letter");	
	}


	return 0;
}