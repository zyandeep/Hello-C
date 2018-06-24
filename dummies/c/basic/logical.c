/*
	Dealing with logical operators
*/

#include <stdio.h>

int main(void)
{
	int agent;
	char code;

	agent = 7;
	code = 'b';

	// if (agent == 7 && code == 'B' || code == 'b')

	if (code == 'y' || code == 'Y' && agent == 8 || agent == 7)
		puts("I was right!");
	else
		puts("I was wrong!");

	return 0;
}