#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 128

int main(int argc, char *argv[])
{
	char orgdir[BUFSIZE];
	char curdir[BUFSIZE];
	char invoke[BUFSIZE*2];
	
	if (argc != 2)
	{
		puts("Missing directory path");
		exit(EXIT_FAILURE);
	}

	getcwd(orgdir, BUFSIZE); 
	printf("Current working directory is %s\n", orgdir);
	strcpy(invoke, orgdir);
	strcat(invoke, "/dirls ");

	if (chdir(argv[1]))			/* change to directory */
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}

	printf("Changing to directory \"%s\"\n", argv[1]);
	getcwd(curdir, BUFSIZE); 
	printf("Current working directory is %s\n", curdir);

	/* call dirls to directory listing */
	strcat(invoke, curdir);
	system(invoke);
	// system("ls -l");

	puts("Changing back to original directory...");
	if (chdir(orgdir)) 
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	getcwd(curdir, BUFSIZE); 
	printf("Current working directory is %s\n", curdir);

	return EXIT_SUCCESS;
}