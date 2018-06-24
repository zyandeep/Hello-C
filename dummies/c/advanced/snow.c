#include <stdio.h>

#define SIZE 7

int main(void)
{
	const char *seven[SIZE] = {
		"bashful",
		"doc",
		"dopey",
		"grumpy",
		"happy",
		"sneezy",
		"sleepy"
	};
	int i, j;
	
	for (i = 0; i < SIZE; i++)
	{
		// puts(i[seven]);
		for (j = 0; j < 3; j++)
		{
			printf("%c", *(*(seven + i) + j) );
		}

		putchar('\n');
	}

	return 0;
}