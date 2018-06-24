#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		puts("This program requires you to type");
		puts("some text after the program name.");

		return -1;
	}

	printf("I shall now work on the \"%s\" option.\n", argv[1]);
	
	return 0;
}