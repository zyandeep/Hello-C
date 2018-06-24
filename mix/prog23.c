/*
 * Any character is entered through the keyboard, write a
 * program to determine whether the character entered is a
 * capital letter, a small case letter, a digit or a special symbol.
 */

#include <stdio.h>

int main(void)
{
	char input = ' ';
	
	puts("Enter a character -->");
	input = getchar();
	
	if (input >= 48 && input <= 57)
	{
		puts("It's a digit");
	}
	else if (input >= 65 && input <= 90)
	{
		puts("It's a capital letter");
	}
	else if (input >= 97 && input <= 122)
	{
		puts("It's a small letter");
	}
	else
	{
		puts("It's a special character");
	}
	
	
	return 0;
}

