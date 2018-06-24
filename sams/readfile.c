#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	FILE *fp;
	int count;
	float num;
	char filename[ 30 ], data[ 30 ];

	puts( "Enter the name of file -->" );
	scanf( "%29s", filename );

	if ( (fp = fopen( filename, "r" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", filename );
		exit( EXIT_FAILURE );
	}
	
	for ( count = 1; count < 6; count++ )
	{
		fscanf( fp, "%[^=]s", data );
		printf( "%s", data );
		fscanf( fp, "%s", data );
		printf( "%s ", data );
		fscanf( fp, "%f", &num );
		printf( "%f", num );
	}

	fclose( fp );
	return 0;
}