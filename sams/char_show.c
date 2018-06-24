#include <stdio.h>
#include <string.h>

void display_grid( char ( *ptr )[ 12 ], int size );

int main( void )
{
	char multi[ 12 ][ 12 ];
	char *str = "XXXXXXXXXXX";

	int i;

	/* Inisialising X to every other element */	
	for ( i = 0; i < 12; i += 2 )
	{
		strcpy( multi[ i ], str );
	}

	display_grid( multi, 12 );

	return 0;
}

void display_grid( char ( *ptr )[ 12 ], int size )
{
	int i;

	for ( i = 0; i < 12; i ++ )
	{
		puts( *( ptr + i ) );
	}
}