#include <stdio.h>

/*void print_letter2(void);

char letter1 = 'X';
char letter2 = '=';*/

/*void print_function( char star );

int ctr;*/

void a_sample_function( void )
{
	int ctr1;

	for ( ctr1 = 0; ctr1 < 25; ctr1++ )
		printf( "*" );
	
	puts( "\nThis is a sample function" );
	{
		char star = '*';
		puts( "\nIt has a problem\n" );
		
		for ( int ctr2 = 0; ctr2 < 25; ctr2++ )
		{
			printf( "%c", star);
		}
	}
}


int main( void )
{
	a_sample_function();
	
	/*int x = 1;
	static int tally = 0;

	for (x = 0; x < 101; x++)
	{
		if (x % 2 == 0) 	
		tally++;
							
	}

	printf( "There are %d even numbers.\n", tally );*/

	/*char star = '*';
	
	print_function( star );*/

/*	char *string = "A string!";
	
	printf( "%c \n", string[0] );
	printf( "%c \n", *string );
	printf( "%c \n", string[9] );
	printf( "%c \n", string[33] );
	printf( "%c \n", *string + 8 );
	printf( "%p \n", string );*/

	/*char string1[];				// array's size is missing. Array is a static DS.
	char string2[] = "Second";
	string1 = string2;
	
	struct 			// An annonymous structure 
	{
		char zodiac_sign[21];
		int month;

	} sign = { "Leo", 8 };

	for( ctr = 0; ctr < 10; ctr++ )
	{
		printf( "%c", letter1 );
		print_letter2();
	}
*/

	return 0;
}

/*void print_function( char star )
{
	char dash = '-';

	for ( ctr = 0; ctr < 25; ctr++ )
	{
		printf( "%c%c", star, dash );
	}
}*/

/*void print_letter2( void )
{
	int ctr;
	for( ctr = 0; ctr < 2; ctr++ )
		printf( "%c", letter2 );
}*/