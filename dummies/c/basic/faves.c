/* fpurge(stdin) to flush or clear the input stream in UNIX */

#include <stdio.h>

void flush_stdin();

int main(void)
{
	char letter, digit;

	printf("What is your favorite character? ");
	letter = getchar();

	flush_stdin();

	// fpurge(stdin);   	// linker couldn't find fpurge obj code 
	
	printf("What is your favorite digit? ");
	digit = getchar();
	
	printf("\nThank you! %c is your favorite character and %c is your \
favorite digit. \n", letter, digit);

	return 0;
}


// eat all residual characters from stdin
void flush_stdin()
{
	while (getc(stdin) != '\n');
}