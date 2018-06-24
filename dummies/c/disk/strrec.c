#include <stdio.h>

int cal_len(char *str);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		puts("Missing STRING");
		return 1;
	}
	
	printf("Length of \"%s\" is: %d\n", argv[1], cal_len( argv[1] ));
	
	return 0;
}


int cal_len( char *str )
{
	if ( *str )
	{
		return ( 1 + cal_len( ++str ) );
	}
	else
	{
		return 0;
	}
}