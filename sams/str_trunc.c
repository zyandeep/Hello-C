#include <stdio.h>

#define MAX 30

int main( void )
{
	char buf1[ MAX + 1 ];
	char buf2[ MAX ];

	puts( "Enter a line of text" );
	scanf( "%[^*] %s", buf1, buf2 );
	
	printf( "\nYou entered:  %s\n", buf1 );
	printf( "Junk strings (if any):  %s\n", buf2 );
	
	puts( fgets(buf1, MAX, stdin) );

	return 0;
}