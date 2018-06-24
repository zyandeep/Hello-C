/* print_it.c -- This program prints the contents of a file with line numbers! */

#include <stdio.h>
#include <stdlib.h>

void do_heading(const char *filename);

int line = 1, page = 1;

int main(int argc, char const *argv[])
{
	char buffer[256];
	FILE *fp;
	
	if (argc < 2)
	{
		fprintf(stderr, "\nProper useage is: ");
		fprintf(stderr, "print_it filename.ext\n");
		return EXIT_FAILURE;
	}

	if ( (fp = fopen(argv[1], "r")) == NULL )
	{
		fprintf(stderr, "\nError in opening file: %s!\n", argv[1]);
		return EXIT_FAILURE;
	}	
	
	while (fgets(buffer, 256, fp) != NULL)
	{
		if (line % 26 == 0)
			do_heading( argv[1] );

		fprintf(stdout, "%3d,%-2d :\t%s", line++, page, buffer);
	}

	fclose(fp);
	return EXIT_SUCCESS;
}


void do_heading(const char *filename)
{
	page++;
	fprintf(stdout, "\n\nPage:%2d, %s\n\n", page, filename);
}
