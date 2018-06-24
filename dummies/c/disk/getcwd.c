#include <stdio.h>
#include <unistd.h>

#define BUFSIZE 128

int main(void)
{
	char buffer[BUFSIZE];

	/* get the current working directory */
	if ( getcwd(buffer, BUFSIZE) )
		printf("The current working directory %s\n", buffer);
	else
		puts("Error in retriving path name");

	return 0;
}