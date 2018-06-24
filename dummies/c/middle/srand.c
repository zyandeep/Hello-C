// psurandom numbers in C with seeding

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	// int seed;

	/*printf("Enter a seed value: ");
	scanf("%d", &seed);

	srandom(seed);*/

	// using computer's clock as seed value
	srandom( (unsigned int) time(NULL));

	puts("\tGenerating psurandom numbers with random()...");
	for (i = 1; i <= 5; i++)
	{
		printf("%li\n", random());
	}

	return 0;
}