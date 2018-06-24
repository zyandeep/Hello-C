/* A "typing" program */
/* Press Ctrl+D to quit */
/* Then it shows you the no. of lines written */

#include <stdio.h>

#define MAX_SIZE 255

int main( void )
{
	// int count_line = 0;
	// char buffer[ MAX_SIZE + 1 ] = " ";
	char *str;

	puts( "Just type away... (Press Ctrl+D to quit)" );

	str = "Hello world";
	// *(str + 5) = '+';

	printf( "%.3f\n", 20.406f );
	printf( "%lf\n", 234.454 );
	printf( "%s\n", str );
	printf( "%Lf\n", 234.454L );

	/*while ( fgets( buffer, MAX_SIZE + 1, stdin ) != NULL )
	{
		count_line++;
	}

	printf( "Total no. of lines = %d \n", count_line );*/

	return 0;
}
