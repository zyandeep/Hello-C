#include <stdio.h>

int x, y, z;

int larger_of( int a, int b);


int main(void)
{
	puts( "\nEnter tow different integer values: " );
	scanf( "%d %d", &x, &y );

	z = larger_of( x, y );

	printf( "\nThe larger value is: %d\n", z );
	
	return 0;
}

int larger_of( int a, int b)
{
	return ( ( a > b ) ? a : b );
}