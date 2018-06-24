// a program to generate random alphabets, digits combo 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_ALPHA 26
#define ASCI_A 65

int main(void)
{
	char letter = ' ';
	int number = -1;

	// using computer's clock to seed random numbers
	srandom( (unsigned int) time(NULL));

	while (number != letter)
	{
		letter = (char) (random() % TOTAL_ALPHA + ASCI_A);
		number = (int) (random() % TOTAL_ALPHA + ASCI_A);

		printf("letter: %c, number: %d\n", letter, number);
	}
	
	return 0;
}