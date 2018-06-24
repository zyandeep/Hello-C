/* reading a file's metadata with stat() */

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	struct stat fbuf;

	if (argc != 2)
	{
		puts("Missing file name!");
		return EXIT_FAILURE;
	}

	if (stat(argv[1], &fbuf))
	{
		printf("Error in reading file %s\n", argv[1]);
		return EXIT_FAILURE;
	}

	puts("Some file stats...");
	printf("File size is %ld bytes\n", fbuf.st_size);
    printf("Last file access: %s", ctime( &fbuf.st_atime ));
    printf("Last file modification: %s", ctime( &fbuf.st_mtime ));

	return EXIT_SUCCESS;
}