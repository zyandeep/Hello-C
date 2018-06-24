// C language's horrible keyword -- goto

#include <stdio.h>

int main(void)
{
	int naughty = 1;

	/*// looping using goto
	LOOP:
	puts("Naughty, naughty!");
	naughty++;

	if (naughty < 10)
		goto LOOP;
*/
	for (; naughty < 10; naughty++)
	{
		puts("Naughty, naughty!");
	}
	
	return 0;
} 