/* A simple guessing game */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

int guess = 0, number = 0;


int main( void )
{
	int user_input;

	/* using computer's clock to seed random numbers */
	
	srandom( ( unsigned int ) time( NULL ) );

	/* computer thinks a random number 1-100 */
	
	number = ( int ) random() % RANGE + 1;
	// printf("[%d]\n", number);

	while ( 1 )
	{
		printf( "\nPick a number between 1 and %d.", RANGE );
		printf( "\n[Enter ctrl+c to quit]:  ");

		scanf( "%d", &user_input );
		guess++;
		
		/* The user got it right! */

		if ( number == user_input )
		{
			puts("\nCongress! You Got It.");
			printf("You took %d guess only!\n", guess);
			printf("\nAnd the number was ofcourse = %d\n", number);
			break;
		}
	
		/* Continue the loop */
		else if (user_input < number)
		{
			puts("Too Low!");
		}
		else
		{
			puts("Too High!");
		}
	}

	return 0;
}
