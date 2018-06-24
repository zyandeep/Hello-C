#include <stdio.h>

int main( void )
{
	int multi[ 2 ][ 4 ] = {
		{ 10, 2, 3, 4 },
		{ 5, 6, 7, 9 }
	};

/*	puts( "Displaying address..." );
	printf( "multi = %p\n", multi );
	printf( "multi[0] = %p\n", multi[ 0 ] );
	printf( "&multi[0][0] = %p\n", &multi[ 0 ][ 0 ] );

	puts( "Displaying Values..." );
	printf( "**multi = %d\n", **multi );
	printf( "*multi[0] = %d\n", *multi[ 0 ] );
	printf( "multi[0][0] = %d\n", multi[ 0 ][ 0 ] );*/

	/*puts( "Displaying sizes..." );
	printf( "Size of multi = %lu\n", sizeof( multi ) );		//A 2D array
	printf( "Size of multi[0] = %lu\n", sizeof( multi[ 0 ] ) );		//A 1D array
	printf( "Size of multi[0][0] = %lu\n", sizeof ( multi[ 0 ][ 0 ] ) );		//An integer variable
*/
	printf( "Value of multi = %p\n", multi );
	printf( "Value of multi + 1 = %p\n", multi + 1 );
	printf( "Address of multi[1] = %p\n", multi[ 1 ] );

	return 0;
}