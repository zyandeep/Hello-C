/* This program reads a file off the disk as text */

#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

int main(int argc, char const *argv[])
{
	FILE *myfile;
	char buffer[BUFSIZE];			/* +1 for '\0' */

	/* check for proper no. of arguments */
	if (argc != 2)
	{
		puts("Missing filename!");
		puts("Here is the format:");
		puts("view filename");

		return EXIT_FAILURE;
	}
	
	/* Does the file exist? */
	if ( !(myfile = fopen(argv[1], "r")) )
	{
		printf("Error opening \"%s\" \n", argv[1]);
		return EXIT_FAILURE;
	}

	printf("\n***File pointer at = %ld***\n", ftell(myfile));
	
	/* file exist, read it */
	while ( (fgets(buffer, BUFSIZE, myfile) ) )
	{
		printf("\n***File pointer at = %ld***\n", ftell(myfile));
		printf("%s", buffer);
	}
		
	fclose(myfile);

	return EXIT_SUCCESS;
}