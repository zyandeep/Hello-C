/* operation on directory */

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	DIR *pdir;
	struct dirent *entry;
	struct stat fbuf;
	int filec = 0, dirc = 0;
	long int t_file_size = 0; 

	if (argc != 2)
	{
		puts("Missing file name!");
		return 1;
	}

	/* opening a directory to memory */
	pdir = opendir(argv[1]);

	if (pdir == NULL)
	{
		printf("Error in open directory \"%s\"\n", argv[1]);
		perror("perror");

		return 1;
	}

	/* do some actions */
	puts("***Directory successfully opened***");

	/* read directory entries */
	while (( entry = readdir(pdir) ))
	{
		if ( stat(entry->d_name, &fbuf) )
			printf("errno: %d, %s\n",  errno, strerror(errno));

		if (S_ISDIR(fbuf.st_mode)) 		/* check for directory */
		{
			dirc++;
			printf("%s\t", "<DIR>");
			printf("%-20s", entry->d_name);
			printf("%s\n", " ");
		}
		else 
		{
			filec++;
			printf("%s\t", "");
			printf("%-20s", entry->d_name);
			printf("size: %ld bytes\n", fbuf.st_size);
			t_file_size += fbuf.st_size;
		}				
	}

	printf("\ntotal directory(s) %d\n", dirc);
	printf("%d file(s) for a total of %ld bytes\n", filec, t_file_size);

	closedir(pdir);

	return 0;
}