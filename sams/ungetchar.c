/*
	ungetc( char, stream ) --> Pushes/returns a character back to the stream
	So, it's available in the stream for the next input function. 
*/

#include <stdio.h>

int main( void )
{
	char ch = ' ';
	
	printf( "Enter a character: " );
	ch = getc( stdin );

	if ( ch != '0' )
	{
		putchar( ch );
	}
	

	/* 'unget' or push 'q' back to the input stream */
	if ( ungetc( ch, stdin ) != EOF )
	{
		puts( "Pushing back to STDIN" );
		putchar( getc( stdin ) );
	}
	if ( ungetc( 'Z', stdin ) != EOF )
	{
		puts( "Pushing back to STDIN" );
		putchar( getc( stdin ) );
	}

	return 0;
}