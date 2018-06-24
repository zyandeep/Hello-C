#include <stdio.h>

void print_array1( void );
void print_array2( void );


int main( void )
{
	int multi[ 2 ][ 3 ][ 4 ] = {
		{
			{ 1, 2, 3, 20 },
			{ 4, 5, 6, 30 },
			{ 7, 8, 9, 40 }
		},
		{
			{ 10, 12, 13, 50 },
			{ 14, 15, 16, 60 },
			{ 17, 18, 19, 70 }
		}
	};

	printf( "multi[0][0] = %p\n", multi[ 0 ][ 0 ] );
	printf( "&multi[0][0][0] = %p\n", &multi[ 0 ][ 0 ][ 0 ] );

	printf( "multi[0][1] = %p\n", multi[ 0 ][ 1 ] );
	printf( "&multi[0][0][1] = %p\n", &multi[ 0 ][ 0 ][ 1 ] );

	printf( "multi[0][1] = %p\n", multi[ 0 ][ 1 ] );
	printf( "&multi[0][0][0] = %p\n", &multi[ 0 ][ 1 ][ 0 ] );

	return 0;
}