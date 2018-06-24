/* Demo of getchar() */
/* getchar() is buffered and echoed */
/*
*	Buffered --> OS bufferes all the character untill '\n'. The it sends them  to "stdin"
				 including '\n'.
	Echoed --> Each input character will be echoed or dispalyed in the screen 

	getchar() = fgetc( stdin ) = getc( stdin )
*/
#include <stdio.h>

#define MAX_SIZE 80

int main( void )
{
	char buffer[ MAX_SIZE + 1 ];
	char ch;
	int i = 0;

	puts( "Enter a line of text: [ CTRL-D for EOF ]" );
	while ( ( ch = getchar() ) != EOF && i < MAX_SIZE )
	{
		buffer[ i++ ] = ch;
	}

	buffer[ i ] = '\0';
	puts( "Your line-of-text was: " );
	puts( buffer );

	return 0;
}