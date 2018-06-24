#include <stdio.h>

#define SIZE 30

int numbers[ SIZE ];

void get_numbers( void );
int calc_smallest( void );
int calc_largest( void );


int main( void )
{
	int small, large;

	get_numbers();

	small = calc_smallest();
	large = calc_largest();
	
	printf( "\nThe smallest number is: %d", small );
	printf( "\nThe largest number is: %d", large );
	puts( " " );
	
	return 0;
}

void get_numbers( void )
{
	int i, done = 1;

	puts( "Enter some numbers [enter 0 to quit] -->" );
	
	for (i = 0; i < SIZE && done != 0; ++i)
	{
		scanf( "%d", &numbers[ i ] );

		if ( numbers[ i ] == 0 )
			done = 0;
	}
}

int calc_smallest( void )
{
	int i, sm = numbers[ 0 ];

	for ( i = 1; i < SIZE && numbers[ i ] != 0; i++ )
	{
		if ( numbers[ i ] < sm )
			sm = numbers[ i ];
	}

	return sm;
}

int calc_largest( void )
{
	int i, lg = numbers[ 0 ];

	for ( i = 1; i < SIZE && numbers[ i ] != 0; i++ )
	{
		if ( numbers[ i ] > lg )
			lg = numbers[ i ];
	}

	return lg;
}