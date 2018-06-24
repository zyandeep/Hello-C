#include <stdio.h>
#include <stdlib.h>

void clear_kb( void );

int main( void )
{
	FILE *fp;
	int count;
	float data[ 5 ];
	char filename[ 30 ];

	puts( "Enter 5 Real values -->" );
	for ( count = 0; count < 5; count++ )
	{
		scanf( "%f", (data + count)  );
	}

	// Clear the keyboard buffer
	clear_kb();

	puts( "Enter a name for the file -->" );
	scanf( "%29s", filename );

	if ( (fp = fopen( filename, "w" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", filename );
		exit( EXIT_FAILURE );
	}
	
	// File is opened. Write data to the file
	for ( count = 0; count < 5; count++ )
	{
		// To the file
		fprintf( fp, "data[ %d ] = %.3f\n", count, *( data + count ) );

		// To the screen/console
		fprintf( stdout, "data[ %d ] = %.3f\n", count, *( data + count ) );
	}

	fclose( fp );
	return 0;
}

void clear_kb( void )
{
	// Read all the characters untill a NEWLINE
	while ( getc( stdin ) != '\n' )
	{
		;
	}
}