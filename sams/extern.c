/* Illustrates declaring external variables. */

#include <stdio.h>

static int x = 200;		/* Variable declearation and defination */

static void print_value( void );

/* 'static' global variables & functions are visible only within their 
	own source code file */

int main( void )
{
	print_value();

	extern int x;			/* Re-declearation of x */

	printf( "[Main] x = %d\n", x );
	
	return 0;
}

static void print_value( void )
{
	extern int x;	/* Re-declearation of x */

	printf( "[print_value] x = %d\n", x );
}