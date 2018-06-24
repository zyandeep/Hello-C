/* pointer and strings */

#include <stdio.h>

int main(void)
{
	char string[] = "Is it supposed to smell that way?";
	char *s;

	/* pointer inisialization */
	s = string;

	/*while (*s)
	{
		putchar(*s++);
	}*/

	while ( putchar(*s++) )
		;

	putchar('\n');

	return 0;
}