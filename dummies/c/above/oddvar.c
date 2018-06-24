/* typedef in C */

#include <stdio.h>

typedef char byte;
typedef int word;

int main(void)
{
	word i;
	byte c;

	for (i = 65; i <= 90; i++)
	{
		c = (byte) i;
		putchar(c);
	}
	
	putchar('\n');
	
	return 0;
}