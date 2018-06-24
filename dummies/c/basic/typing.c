// Breaking infinite or endless loop with break

#include <stdio.h>

int main(void)
{
	char c = ' ';

	puts("Typing program...");
	puts("Type away...");

	for (; c != '~' ;)
	{
		c = getchar();

		if (c == '~' || c == '`')
			break;
	}

	return 0;
}