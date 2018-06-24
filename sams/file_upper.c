/* Copying a text file */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int copy_file( char *old, char *new );

int main( int argc, char *argv[] )
{
	if ( argc != 3 )
	{
		fprintf( stderr, "Filename missing.\n" );
		exit( EXIT_FAILURE );
	}
	
	if ( copy_file( argv[ 1 ], argv[ 2 ] ) == 0 )
	{
		puts( "Copy operation successful" );
	}
	else
	{
		fprintf( stderr, "Error during copy operation\n" );
		exit( EXIT_FAILURE );
	}

	return 0;
}

int copy_file( char *old, char *new )
{
	FILE *old_f, *new_f;
	char c;
	
	if ( (old_f = fopen( old, "r" )) == NULL || (new_f = fopen( new, "w" )) == NULL )
	{
		return -1;
	}

	while( (c = fgetc( old_f )) != EOF )
	{
		if ( islower( c ) )
		{
			c = toupper( c );
		}
		fputc( c, new_f );	
	}

	fclose( old_f );
	fclose( new_f );

	return 0;
}