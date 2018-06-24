#include <stdio.h>

#define SIZE 10

void add_arrays( int a1[], int a2[], int a3[], int size );
void print_array( int arr[], int size );

int main( void )
{
	int array1[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int array2[ SIZE ] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int array3[ SIZE ];

	puts( "The 1st array elements are: " );
	print_array( array1, SIZE );
	puts( "The 2nd array elements are: " );
	print_array( array2, SIZE );

	add_arrays( array1, array2, array3, SIZE );

	puts( "The new array elements are: " );
	print_array( array3, SIZE );

	return 0;
}

void add_arrays( int a1[], int a2[], int a3[], int size )
{
	int i;

	for (i = 0; i < size; ++i)
	{
		a3[ i ] = a1[ i ] + a2[ i ];
	}
}

void print_array( int arr[], int size )
{
	int i;

	for (i = 0; i < size; ++i)
	{
		printf( "array[%d] = %d\n", i, arr[i] );
	}
}