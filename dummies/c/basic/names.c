// Breaking infinite or endless loop with break

#include <stdio.h>

int main(void)
{
	char a, b, c;

	for (a = 'A'; a <= 'Z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			for (c = 'A'; c <= 'Z'; c++)
			{
				printf("%c%c%c ", a, b, c);
			}
		}

	}

	return 0;
}