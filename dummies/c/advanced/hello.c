#include <stdio.h>

#define SIZE 70

int main(void)
{
	char string[SIZE];
	char *pchar;
	int i = 0;

	printf("Enter a line of text: ");
	fgets(string, sizeof(string), stdin);

	pchar = string;

	while (*pchar)
	{
		printf("%c lives at address %p\n", *pchar, pchar);
		pchar = &string[++i];
	}
	
	return 0;
}
