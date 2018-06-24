// psurandom numbers in C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	puts("\tGenerating psurandom numbers with rand()...");
	for (i = 1; i <= 5; i++)
	{
		printf("%i\n", rand());
	}

	puts("\tGenerating psurandom numbers with random()...");
	for (i = 1; i <= 5; i++)
	{
		printf("%li\n", random());
	}

	return 0;
}