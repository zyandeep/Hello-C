/* Unreadable code */

/*# include <stdio.h>
int x, y;int main(void){printf(
	"\n Enter two numbers: ");scanf(
	"%d %d", &x,&y);printf(
	"\n\n%d is bigger", (x>y)?x:y);return 0;}*/

/* Readable code */
#include <stdio.h>
	
int x, y;

int main( void )
{
	printf( "\n Enter two numbers for X and Y: " );
	scanf( "%d %d", &x, &y );

	// printf( "\n\n %d is bigger\n", ( x > y )? x : y);

	/* Using nested if */

	/*if (x > 1)
	{
		if (x < 20)
			printf( "y = %d\n", y = x);
		else
			printf( "y = %d\n", y);
	}
	else
	{
		printf( "y = %d\n", y);
	}*/

	/*  Using logical operator */

	/*if (x > 1 && x < 20)
	{
		printf( "y = %d\n", y = x);
	}
	else
	{
		printf( "y = %d\n", y);
	}*/

	/*  Using conditional operator (ternary operator) */

	printf( "y = %d\n", ( x > 1 && x < 20 ) ? y = x : y );

	return 0;
}
