#include <stdio.h>

void print_array1( int (*ptr)[ 4 ] );
void print_array2( int (*ptr)[ 4 ], int num );

int main( void )
{
	int multi[ 3 ][ 4 ] = {
		{ 10, 2, 3, 4 },
		{ 5, 6, 7, 9 },
		{ 11, 13, 14, 15 }
	};
	int i;

	puts( "Version 1..." );
	for ( i = 0; i < 3; ++i )
	{
		print_array1( multi + i );
	}
	
	puts( "Version 2..." );
	print_array2( multi, 3 );

	return 0;
}

void print_array1( int (*ptr)[ 4 ] )
{
	int i; 
	int *temp = ( int * )ptr;

	for ( i = 0; i < 4; ++i, temp++ )
	{
		printf( "%d ", *temp );
	}
	puts( "" );
}

void print_array2( int (*ptr)[ 4 ], int num )
{
	int i, j; 
	
	for ( i = 0; i < num; ++i )
	{
		for ( j = 0; j < 4; j++ )
		{
			printf( "%d ", *(*(ptr + i) + j ) );
		}
		puts( "" );
	}
}