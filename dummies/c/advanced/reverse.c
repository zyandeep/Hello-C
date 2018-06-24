#include <stdio.h>
#include <string.h>

#define SIZE 70

char* str_reverse(char *ptr);

int main(void)
{
	char string[SIZE];

	printf("Enter a string : ");
	fgets(string, SIZE, stdin);

	// remove the '\n';
	string[strchr(string, '\n') - string] = '\0';

	printf("Original string: %s\n", string);
	printf("reverseed version: %s\n", str_reverse(string));

	return 0;
}

char* str_reverse(char *ptr)
{
	static char string[SIZE];
	int i = 0;
	int size = strlen(ptr);

	for (i = size - 1; i >= 0 ; --i)
	{
		string[size - (i+1)] = *(ptr + i);
	}

	string[size] = '\0';

	return string;
}