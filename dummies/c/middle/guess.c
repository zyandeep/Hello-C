// a guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CHANCH 6
#define RANGE 100

int main(void)
{
	int number, input, guess = 1;

	// using computer's clock to seed random numbers
	srandom( (unsigned int) time(NULL));

	// computer thinks a random number 1-100
	number = (int) random() % 100 + 1;

	puts("Guessing Game!");
	puts("I'm thinking a number between 1 to 100.");
	puts("Can you guess what it is?");
	puts("Be careful! you have only 6 guess\n");

	while (guess <= 6)
	{
		printf("[Guess %d] Enter guess: ", guess);
		scanf("%d", &input);

		if (number == input)
		{
			puts("Congress! You Got It.");
			guess = -1;
			break;
		}
		else if (input < number)
		{
			puts("Too Low!");
			guess++;
		}
		else if (input > number)
		{
			puts("Too High!");
			guess++;
		}
	}

	if (guess > 0)
		printf("Sorry, The number was %d\n", number);
	
	return 0;
}