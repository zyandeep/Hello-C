/* exploiting const keyword in C */

#include <stdio.h>

int main(void)
{
	/* Explicitly telling the compiler that 
	   the string is constant, pointer is not, Only works with char pointer
	*/
	const char *string = "You are so loser that you don't wanna go out even in Puja!";
	
	/*const int test = 5;
	test += 10; */

	puts(string);

	while (*string)
	{
		putchar(*string++);
	}

	return 0;
}