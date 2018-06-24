#include <stdio.h>

#define SIZE 30

char* chk_str( char *s1, char *s2 );

int main( void )
{
	char text1[ SIZE ];
	char text2[ SIZE ];

	puts( "Enter two strings -->" );
	
	while( *fgets( text1, SIZE, stdin ) == '\n' )
		puts( "Don't enter blank lines!" );

	while( *fgets( text2, SIZE, stdin ) == '\n' )
		puts( "Don't enter blank lines!" );

	printf( "The bigger text is %s\n", chk_str( text1, text2 ) );

	return 0;
}

char* chk_str( char *s1, char *s2 )
{
	int c1 = 0, c2 = 0;

	while( *s1++ != '\0' )
		c1++;

	while( *s2++ != '\0' )
		c2++;

	if( c1 > c2 )
		return ( s1 - ++c1 );
	else
		return ( s2 - ++c2 );
}