// a program to stimulate dice rolling

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int d1, d2;
	
	// using computer's clock to seed random numbers
	srandom( (unsigned int) time(NULL));

	puts("Two dices are rolling down...");
	d1 = ((int) random() % 6) + 1;
	d2 = ((int) random() % 6) + 1;

	printf("You rolled %d and %d: Total = %d\n", d1, d2, d1 + d2);
	
	return 0;
}