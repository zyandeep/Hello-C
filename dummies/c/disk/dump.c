/* This program reads a file off the disk as binary */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *myfile;
	int i;
	unsigned int count = 0;
	
	/* check for proper no. of arguments */
	if (argc != 2)
	{
		puts("Missing filename!");
		puts("Here is the format:");
		puts("view filename");

		return EXIT_FAILURE;
	}
	
	/* Does the file exist? */
	if ( !(myfile = fopen(argv[1], "rb")) )
	{
		printf("Error opening \"%s\" \n", argv[1]);
		return EXIT_FAILURE;
	}

	/* file exist, read it */
	while ( (i = fgetc(myfile)) != EOF )
	{
		printf("%2X ", i);
		count++;
	}

	/* file size in terms of bytes */
	printf("\n%s : size = %u bytes\n", argv[1], count);
		
	fclose(myfile);

	return EXIT_SUCCESS;
}