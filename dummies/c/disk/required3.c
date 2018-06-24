#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		puts("[warning]: This program requires two arguments.");

		return 1;
	}
	
	printf("I shall now work on the \"%s\" ", argv[1]);
	printf("and \"%s\" option.\n", argv[2]);

	return 0;
}