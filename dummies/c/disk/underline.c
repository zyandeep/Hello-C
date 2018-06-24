#include <stdio.h>

int main(void)
{
	char c;

	while ((c = fgetc(stdin)) != EOF)
	{
		if (c == ' ')
			c = '_';
		
		fputc(c, stdout);
	}
	
	return 0;
}