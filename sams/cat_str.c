#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concat_str( char *s1, char *s2 );

int main( int argc, char *argv[] )
{
	char *p_str = NULL;
	
	if( argc != 3 )
	{
		puts( "Incorrect useage" );
		puts( "Syntax: prog_name str1 str2" );

		return 1;
	}
	
	p_str = concat_str( argv[1], argv[2] );

	printf( "The new concataned string is -->\n" );
	puts( p_str );
	free( p_str );
	
	return 0;
}

char* concat_str( char *s1, char *s2 )
{
	int i = 0;

	/* +1 for a space in-between */
	/* +1 for the '\0' */
	char *p_new_str = ( char* ) malloc( sizeof( char ) * ( strlen(s1) + strlen(s2) + 2 ) );

	while( *s1 != '\0' )		/* Copy the 1st string */
	{
		*( p_new_str + i ) = *s1;
		i++;
		s1++;
	}

	/* Insert a space between the two strings */
	*( p_new_str + i ) = ' ';
	i++;

	while( *s2 != '\0' )		/* Copy the 2nd string */
	{
		*( p_new_str + i ) = *s2;
		i++;
		s2++;
	}

	/* Terminate the new string by including '\0' at the end */
	*( p_new_str + i ) = '\0';

	return p_new_str;
}