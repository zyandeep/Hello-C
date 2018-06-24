/* Reads every line, display it untill a blank line is entered */

#include <stdio.h>

#define SIZE 100

int main( void )
{
	char text[ SIZE ];

	puts( "Enter a line of text [Enter a blank line to quit] -->" );

	while( *fgets( text, SIZE, stdin ) != '\n' )
	{
		printf( "You entered: %s", text );
	}

	return 0;
}