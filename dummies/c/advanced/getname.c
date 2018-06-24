/* pointer and strings */

#include <stdio.h>

#define SIZE 70

int main(void)
{
	char string[SIZE];
	char *s;

	/* pointer inisialization */
	s = string;

	printf("Please enter your name: ");
	fgets(string, sizeof(string), stdin);

	puts("Hello,");
	while (*s)
		putchar(*s++);

	return 0;
}