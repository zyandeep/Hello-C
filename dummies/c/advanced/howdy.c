#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *string;

	string = (char *) malloc(80);	
	if (string == NULL)
	{
		puts("Not enough memory!");
		exit(EXIT_FAILURE);
	}

	strcpy(string, "Howdy! Howdy! Hi!");
	printf("%s\n", string);

	exit(EXIT_SUCCESS);
}