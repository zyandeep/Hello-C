/* Redirecting stdin, stdout, stderr */

#include <stdio.h>

#define MAX_SIZE 256

void err_msg( void );

int main( void )
{
	char buffer[ MAX_SIZE ];
	
	while ( fgets( buffer, MAX_SIZE, stdin ) != NULL )
	{
		puts( buffer );
	}
	err_msg();
	
	return 0;
}

void err_msg( void )
{
	fprintf( stderr, "This is a smaple error message\n" );
	perror( "This is from perror()" );
}