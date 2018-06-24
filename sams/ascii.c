/* Printing the ASCII character set */

#include <stdio.h>

int main( void )
{
	char cs;			// Standard 7-bit ASCII
	unsigned char ce;	// Extended 8-bit ASCII
	
	for (cs = 46; cs < 60; cs++)
	{
		printf( "%c = %d\t", cs, cs );
	}

	printf("\n\n");

	for (ce = 128; ce < 180; ce++)
	{
		printf( "%c = %d\t", ce, ce );
	}

	puts( " " );

	return 0;
}