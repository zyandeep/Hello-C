/* Write a program that opens any disk file, reads it in 128-byte blocks, and displays
 * the contents of each block on-screen in both hexadecimal and ASCII formats.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 128

int main( int argc, char const *argv[] )
{
	unsigned char buffer[ MAX_SIZE ] = " ";
	FILE *fp;
	int i;
	int item_read;

	if ( argc != 2 )
	{
		puts( "Input error!" );
		puts( "Useage: ./a.out <file name>" );
		exit( EXIT_FAILURE );
	}

	if ( ( fp = fopen( argv[1], "rb" ) ) == NULL )
	{
		fprintf( stderr, "Error in opening file %s\n", argv[1] );
		exit( EXIT_FAILURE );
	}

	puts( "\n I'm reading from the file..." );

	// Read the "raw" bytes
	while( !feof(fp) )
	{
		item_read = fread( buffer, sizeof( unsigned char ), MAX_SIZE, fp );

		for ( i = 0; i < item_read; ++i )
		{
			putchar( buffer[i] );
			printf( " %#x\n", buffer[i] );
		}
	}

	fclose( fp );

	return 0;
}