#include <stdio.h>

int main( void )
{
	char text1[ 30 ];
	char text2[ 30 ];

	puts( "Enter your full name -->" );
	scanf( "%3s", text1 );
	scanf( "%s", text2);

	/* scanf( "%3s %s", text1, text2 ); */

	printf( "Hello %s %s\n", text1, text2 );

	return 0;
}