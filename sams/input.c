// continues to prompt until 99 or six even values enters

#include <stdio.h>

#define SIZE 6

void print_array ( int *ptr );

int main( void )
{
	int num, i = 0;
	int even_array[ SIZE ] = {1, 1, 1, 1, 1, 1};

	do 
	{
		printf( "Enter a even number: " );
		scanf( "%d", &num );

		if ( num % 2 == 0)
			even_array[i++] = num;

	} while ( num != 99 && i != 6 );

	puts( "Input accepted!" );
	print_array( even_array );

	return 0;
}

void print_array ( int *ptr )
{
	int i;

	puts( "Array elements are: " );

	for ( i = 0; i < SIZE && *ptr != 1; i++, ptr++ )
	{
		printf( "array[%d] = %d\t", i, *ptr );
	}
	
	puts(" ");
}