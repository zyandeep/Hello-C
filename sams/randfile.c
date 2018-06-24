#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 50

int main( void )
{
	FILE *fp;
	int buffer[ BUFSIZE ];
	int pos, i;

	for ( i = 0; i < BUFSIZE; i++ )
	{
		buffer[ i ] = i * 10;
	}

	if ( (fp = fopen( "RANDOM.DAT", "wb" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", "RANDOM.DAT" );
		exit( EXIT_FAILURE );
	}

	if ( fwrite(buffer, sizeof(buffer), 1, fp) != 1 )
	{
		fprintf( stderr, "Error in opening file: %s\n", "RANDOM.DAT" );
		exit( EXIT_FAILURE );
	}

	fclose( fp );

	if ( (fp = fopen( "RANDOM.DAT", "rb" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", "RANDOM.DAT" );
		exit( EXIT_FAILURE );
	}

	while( 1 )
	{
		printf( "Enter element to read[ 1 - %d ], -1 to quit: ", BUFSIZE -1 );
		scanf( "%d", &pos );
		
		if ( pos == -1 )
			break;
		else if ( pos < 1 || pos > BUFSIZE - 1 )
		{
			puts( "\nBad offset!" );
			continue;
		}

		/* Move the position indicator to the specified element */
		if ( fseek( fp, (pos-BUFSIZE) * sizeof(int), SEEK_END ) != 0 )
		{
			fprintf( stderr, "\nError using fseek()." );
			exit( EXIT_FAILURE );
		}

		fread( buffer, sizeof( int ), 1, fp );

		printf( "Element %d has value = %d\n", pos, *buffer );
	}

	fclose( fp );
	return 0;
}
