// a program to stimulate 16 dice rolling

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice, i;
	
	// using computer's clock to seed random numbers
	srandom( (unsigned int) time(NULL));

	puts("16 dices are rolling down...");
	for (i = 1; i <= 16; i++)
	{
		dice = ((int) random() % 6) + 1;
		printf("dice[%d]: %d\n", i, dice);	
	}

	return 0;
}