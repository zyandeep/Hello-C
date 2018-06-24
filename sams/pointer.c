/*  Pointer arithmatic 
 *  Legal operations: increment, decrement, diff. btw. two pointer 
 	ptr1 relational op. ptr2
 */

#include <stdio.h>

int main( void )
{
	int numbers[ 5 ] = { 20, -12, 55, -10, 9 };
	int temp = 23;
	int *ptr1, *ptr2;

	/* Initialising pointers */
	ptr1 = &temp;
	ptr2 = numbers;

	if( ptr2 == ( int * ) &numbers )
	{
		puts( "numbers[] = &numbers[]" );
	}

	printf( "ptr2 - ptr1 = %ld\n", ptr2 - ptr1 );	/* tells you how far apart they are */
	
	/* tells you between which of them is at low memory address */

	printf( "ptr1 < ptr2 = %d\n", ptr1 < ptr2 );

	/* for test purpose, all of them are invalid */

	// printf( "ptr1 * ptr2 = %ld\n", ptr1 * ptr2 );
	// printf( "ptr1 / ptr2 = %ld\n", ptr1 / ptr2 );
	// printf( "ptr1 + ptr2 = %ld\n", ptr1 + ptr2 );	

	return 0;
}