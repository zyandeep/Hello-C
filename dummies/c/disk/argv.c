#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;

	printf("There were %d command line arguments passed\n", argc);

	for (i = 0; i < argc; ++i)
	{
		printf("Argument #%i: %s\n", i, argv[i]);
	}

	return 0;
}