/*
Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.
(2) Whether a character entered through the keyboard is a
special symbol or not.
*/

#include <stdio.h>

int main(void)
{
	char input_char;

	puts("Enter a character -->");
	input_char = getchar();

	(input_char >= 97 && input_char <= 122) ? puts("lower case letter") : puts("not lower case letter");

	((input_char >= 0 && input_char <= 47) || (input_char >= 58 && input_char <= 64) || 
		(input_char >= 91 && input_char <= 96) || (input_char >= 123 && input_char <= 127)) ?  
	
		puts("special character") : puts("not special character");

	return 0;
}