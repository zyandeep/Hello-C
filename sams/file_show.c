/* Copying a text file */

#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 128

unsigned char buffer[ BUF_SIZE ];

int main( int argc, char *argv[] )
{
	FILE *fp;
	int i;

	if ( argc != 2 )
	{
		fprintf( stderr, "Filename missing.\n" );
		exit( EXIT_FAILURE );
	}

	if ( (fp = fopen( argv[ 1 ], "rb" )) == NULL )
	{
		fprintf( stderr, "%s couldn't be opened\n", argv[ 1 ] );
		exit( EXIT_FAILURE );
	}

	while( !feof( fp ) )
	{
		fread( buffer, sizeof( buffer ), 1, fp );
		for ( i = 0; i < BUF_SIZE; i++ )
		{
			printf( "%c %2X\n", buffer[ i ], buffer[ i ] );
		}

	}

	fclose( fp );
	return 0;
}
