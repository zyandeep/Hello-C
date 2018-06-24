#include <stdio.h>
#include <string.h>

#define SIZE 30

int strlength(char *ptr);

int main(void)
{
	char string[SIZE];

	puts("Enter a line of text -->");
	fgets(string, SIZE, stdin);

	// remove the '\n';
	string[strchr(string, '\n') - string] = '\0';

	printf("Length of '%s': %d\n", string, strlength(string));
	return 0;
}

int strlength(char *ptr)
{
	int count = 0;

	while (*ptr++)
	{
		count++;
	}

	return count;
}