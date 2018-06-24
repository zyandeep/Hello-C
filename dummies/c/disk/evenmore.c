#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *myfile;

	myfile = fopen("alive.txt", "a");

	if (!myfile)
	{
		puts("Some kind of error");
		return EXIT_FAILURE;
	}

	fputs("Alive, I tell you! Alive!\n", myfile);

	fclose(myfile);

	return EXIT_SUCCESS;
}