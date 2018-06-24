#include <stdio.h>

int ctr;
char letter1 = 'X';
char letter2 = '=';

void print_letter2( void );


int main( void )
{
	for( ctr = 0; ctr < 10; ctr++ )
	{
		printf( "%c", letter1 );
		print_letter2();
	}

	puts(" ");
	
	return 0;
}

void print_letter2( void )
{
	int ctr; 	/* Local to this function. It "mask" / "shadows" the global ctr variable */

	for( ctr = 0; ctr < 2; ctr++ )
	{
		printf( "%c", letter2 );
	}	
}