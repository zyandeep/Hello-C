#include <stdio.h>

#define SIZE 10

void print_array( int *arr );
void copy_array( int *src, int *dest );


int main( void )
{
	int numbers[ SIZE ] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int new_array[SIZE];

	puts( "The original array is -->" );
	print_array( numbers );

	copy_array( numbers, new_array );

	puts( "The new array is -->" );
	print_array( new_array );

	return 0;
}

void print_array( int *arr )
{
	int i;

	for ( i = 0; i < SIZE; i++ ) 
	{
		printf( "\narray[%d] = %d  ", i, *arr++ );
	}

	puts( " " );
}

void copy_array( int *src, int *dest )
{
	int i;

	for ( i = 0; i < SIZE; i++, dest++, src++ ) 
	{
		*dest = *src + 10;
	}
}