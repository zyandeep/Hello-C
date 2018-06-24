#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 5

int main( void )
{
	FILE *fp;
	char buffer[] = "abcdefghijklmnopqrstuvwxyz";

	if ( (fp = fopen( "file1.txt", "w" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", "file1.txt" );
		exit( EXIT_FAILURE );
	}

	if ( fputs( buffer, fp ) == EOF )
	{
		fprintf( stderr, "Error in writing to file\n" );
		exit( EXIT_FAILURE );
	}

	fclose( fp );

	if ( (fp = fopen( "file1.txt", "r" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", "file1.txt" );
		exit( EXIT_FAILURE );
	}

	printf( "After opening, position: %ld\n", ftell( fp ) );

	fgets( buffer, BUFSIZE + 1, fp );
	printf( "After reading in \"%s\", position = %ld\n", buffer, ftell( fp ) );

	fgets( buffer, BUFSIZE + 1, fp );
	printf( "The next 5 characters are \"%s\", position now = %ld\n", buffer, ftell( fp ) );

	rewind( fp );

	printf( "After rewinding, position is back at: %ld\n", ftell( fp ) );

	fgets( buffer, BUFSIZE + 1, fp );
	printf( "After reading 5 characters \"%s\", position is = %ld\n", buffer, ftell( fp ) );

	fclose( fp );
	return 0;
}