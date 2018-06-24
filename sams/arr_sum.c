// Sum of 10 integers

#include <stdio.h>

#define SIZE 10

int calc_sum( int arr[] );


int main( void )
{
	int i;
	int numbers[ SIZE ] = { 0 };

	puts( "Enter 10 integer numbers -->" );

	for ( i = 0; i < SIZE; i++ ) 
	{
		scanf( "%d", (numbers + i) );
	}

	printf( "\nSum of the 10 integers is: %d", calc_sum(numbers) );
	puts( " " );

	return 0;
}

int calc_sum( int arr[] )
{
	int i, sum = 0;

	for ( i = 0; i < SIZE; i++ ) 
	{
		sum = sum + arr[i];
	}

	return sum;
}