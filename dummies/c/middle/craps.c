// The Craps game stimulation in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE !FALSE

void flush_input();
void play_game();

int main(void)
{
	char ans;
	int done = FALSE;

	puts("Craps Game!");
	puts("Be careful! The bet is double or nothing!\n");

	while(!done)
	{
		printf("Want to play [y or n]: ");
		ans = getchar();

		// check if the player dare to paly!
		switch (ans)
		{
			case 'y':
			case 'Y':
				play_game();
				done = TRUE;
				break;

			case 'n':
			case 'N':
				done = TRUE;
				break;

			default:
				puts("Choose your option wisely!");
		}

		flush_input();	
	}


	return 0;
}


void flush_input()
{
	while (getc(stdin) != '\n')
		;
}

void play_game()
{
	int dice1, dice2, sum = 0, point;
	float bet;
	
	printf("Enter your bet: $");
	scanf("%f", &bet);

	// using computer's clock to seed random numbers
	srandom( (unsigned int) time(NULL));

	puts("Two dices are rolling down...");
	dice1 = (int) random() % 6 + 1;
	dice2 = (int) random() % 6 + 1;
	sum = dice1 + dice2;

	printf("\tYou have rolled %d and %d.\n", dice1, dice2);

	switch (sum)
	{
		case 7:
		case 11:
			puts("-- You Win!");
			bet *= 2;
			break;

		case 2:
		case 3:
		case 12:
			puts("-- Craps, You Lose!");
			bet = 0;
			break;

		default:
			point = sum;
			printf("Your point is %d \n", point);
			sum = 0;

			while (TRUE)
			{
				puts("Dices are rolling again...");

				dice1 = (int) random() % 6 + 1;
				dice2 = (int) random() % 6 + 1;
				sum = dice1 + dice2;

				printf("\tYou have rolled %d and %d.\n", dice1, dice2);

				if (sum == 7)
				{
					puts("-- Craps, You Lose!");
					bet = 0;
					break;	
				}

				if (sum == point)
				{
					puts("-- You Win!");
					bet *= 2;
					break;
				}
			}

	}

	printf("You now have $%.2f \n", bet);
}