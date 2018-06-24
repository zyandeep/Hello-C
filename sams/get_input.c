#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 256

int total_line = 0;

void print_msg( void );

int main( void )
{
	char buffer[ MAX_SIZE ];
	
	atexit( &print_msg );

	// Read untill the user enters EOF
	while ( fgets( buffer, MAX_SIZE + 1, stdin ) != NULL )
	{
		total_line++;
		puts( buffer );
	}
	
	return 0;
}

void print_msg( void )
{
	printf( "\nTotal lines you've entered: %d\n", total_line );
}