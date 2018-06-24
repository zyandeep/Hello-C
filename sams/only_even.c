#include <stdio.h>


int main( void )
{
	int num;

	do 
	{
		printf( "Enter a even number: " );
		scanf( "%d", &num );

	} while ( num % 2 != 0 );

	puts( "Input accepted!" );

	return 0;
}