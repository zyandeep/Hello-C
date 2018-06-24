// ascii code of character

#include <stdio.h>

int main(void)
{
	char input;

	printf("Enter ascii code of a character: ");
	scanf("%c", &input);

	printf("ascii code of %c is %d\n", input, input);

	return 0;
}
