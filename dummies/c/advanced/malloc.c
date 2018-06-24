#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char input[50];
	char *string = NULL;
	int size = 0;

	printf("Enter a text: ");
	fgets(input, 50, stdin);

	// calculate the input string length
	size = strlen(input);

	/* allocate storage for the duplicate string 
		size + 1 to hold '\0'
	*/
	string = (char *) malloc(size + 1);	
	if (string == NULL)
	{
		puts("Not enough memory!");
		exit(EXIT_FAILURE);
	}

	strcpy(string, input);
	printf("Duplicate string: %s", string);

	return 0;
}