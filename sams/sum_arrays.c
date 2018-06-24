#include <stdio.h>

int sumarrays( int a1[], int s1, int a2[], int s2 );


int main( void )
{
	int array1[ 5 ] = { 1, 2, 3, 4, 5 };
	int array2[ 7 ] = { 6, 7, 8, 9, 10, 100, 200 };

	printf( "\nThe sum of two arrays is: %d\n", sumarrays( array1, 5, array2, 7) );
	
	return 0;
}

int sumarrays( int a1[], int s1, int a2[], int s2 )
{
	int sum = 0, i;

	/* Calculate the 1st array */

	for ( i = 0; i < s1; ++i )
	{
		sum += a1[ i ];
	}

	/* Calculate the 2nd array */

	for ( i = 0; i < s2; ++i )
	{
		sum += *( a2 + i );
	}

	return sum;
}