#include <stdio.h>

#define MAX_SIZE 30

int main( void )
{
	char buffer[ MAX_SIZE + 1 ];

	puts( "Enter some text -->" );
	scanf( "%[^*]", buffer );
	printf( "Your text: %s\n", buffer );

	// get remaining characters from the stream, if any
	printf( "Remaining characters from the STDIN: %s", 
			fgets( buffer, MAX_SIZE + 1, stdin ) );

	puts( "**********************************" );
	puts( "Jack asked, \"What is a backslash?\"\nJill said, \
\"It is '\\'.\" \n" );
	
	return 0;
}