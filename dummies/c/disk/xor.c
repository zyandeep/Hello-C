/* A filter program to implement xor encryption */

#include <stdio.h>
#include <string.h>

#define SIZE 80
#define KEY 31

int main(void)
{
	char input[SIZE];
	char *ptr;

	while ( fgets(input, SIZE, stdin) )
	{
		// remove the '\n'
		input[strchr(input, '\n') - input] = '\0';

		ptr = input;

		while(*ptr)
		{
			*ptr ^= KEY;
			ptr++;
		}

		fputs(input, stdout);

		putchar('\n');
	}

	return 0;
}