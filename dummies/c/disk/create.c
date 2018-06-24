#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *pfile;

	pfile = fopen("alive.txt", "w");

	if (!pfile)
	{
		puts("Error in opening file");
		return EXIT_FAILURE;
	}

	/* no error, write to the "pfile" buffer */
	fprintf(pfile, "I created a file! It's alive!\n");

	/* closeing the file, flushing the "pfile" buffer to disk */
	fclose(pfile);

	return EXIT_SUCCESS;
}