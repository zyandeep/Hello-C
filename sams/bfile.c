#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main( void )
{
	FILE *fp;
	int i;
	int array1[ SIZE ], array2[ SIZE ];
	
	// Inisialize the array1[]
	for ( i = 0; i < SIZE; i++ )
	{
		array1[ i ] = 2 * i;
	}

/***************************************************************************/
	/* Write the whole array1[] as one data to the file. */

	if ( (fp = fopen( "binary.dat", "wb" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", "binary.dat" );
		exit( EXIT_FAILURE );
	}

	if ( fwrite( array1, sizeof( array1 ), 1, fp ) != 1 )
	{
		fprintf( stderr, "Error in writing to file: %s\n", "binary.dat" );
		exit( EXIT_FAILURE );
	}
/******************************************************************************/

	fclose( fp );

/*********************************************************************************/
	/* Now re-open the file first. */
	/* And read the file as an array of 10 integers to array2[]. */

	if ( (fp = fopen( "binary.dat", "rb" )) == NULL )
	{
		fprintf( stderr, "Error in opening file: %s\n", "binary.dat" );
		exit( EXIT_FAILURE );
	}

	if ( fread( array2, sizeof( int ), SIZE, fp ) != SIZE )
	{
		fprintf( stderr, "Error in reading file: %s\n", "binary.dat" );
		exit( EXIT_FAILURE );
	}
	
	fclose( fp );
/*********************************************************************************/

	/* Verify the two arrays */
	for ( i = 0; i < SIZE; i++ )
	{
		printf( "array1[%d] = %d\tarray2[%d] = %d\n", i, array1[ i ], i, array2[ i ] );
	}

	return 0;
}