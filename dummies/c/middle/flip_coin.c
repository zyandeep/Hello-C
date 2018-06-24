// a program to stimulate 16 dice rolling

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEAD 1
#define TAIL 0
#define FLIPS 1000

int main(void)
{
	int coin, i, head_count, tail_count;

	head_count = tail_count = 0;

	// using computer's clock to seed random numbers
	srandom( (unsigned int) time(NULL));

	puts("A coin is gonna flip 1000 times...");
	for (i = 1; i <= FLIPS; i++)
	{
		coin = (int) (random() % 2);
		
		if (coin == HEAD)
		{
			head_count++;
			printf("HEAD\t");
		}
		else
		{
			tail_count++;
			printf("TAIL\t");
		}
	
	}
	
	printf("\nTOTAL FLIPS: %d\n", FLIPS);
	printf("HEADS = %.2f %%\n", (float) head_count/FLIPS * 100);
	printf("TAILS = %.2f %%\n", (float) tail_count/FLIPS * 100);

	return 0;
}