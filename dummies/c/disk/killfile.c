/* Deleting (unlink) a File */

#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		puts("Missing argument");
		puts("try: rmv <filename> ");

		return 1;
	}

	if ( unlink(argv[1]) )
	{
		perror("Error in deleting");
		return 1;
	}

	puts("File killed!");

	return 0;
}