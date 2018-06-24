#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ORIGINAL_SIZE 4096   	/* 4 KB of space */

void check_memory(void *ptr);

int main(void)
{
	char *string = NULL;
	int size = 0;

	/* Allocate "enough" memory */
	string = (char *) malloc(ORIGINAL_SIZE);	
	check_memory(string);

	printf("Enter a text: ");
	fgets(string, ORIGINAL_SIZE, stdin);

	/* Calculate the input string length. 
	   +1 for '\0' 
	*/
	size = strlen(string) + 1;

	/* Resize the buffer to the input string size to save space */
	string = (char *) realloc(string, size);
	check_memory(string);

	puts("Memory reallocation successfull!");
	printf("String is --> %s", string);

	free(string);

	puts("Memory has been realesed");
	printf("String is --> %s", string);

	return 0;
}


void check_memory(void *ptr)
{
	if (ptr == NULL)
	{
		puts("Not enough memory!");
		exit(EXIT_FAILURE);
	}
}