/* Copying a file */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 80

int copy_file( char *old, char *new );
void remove_newline( char *str );

int main( void )
{
	char oldfile[ MAX_SIZE ];
	char newfile[ MAX_SIZE ];

	puts( "Enter the source file name: " );
	fgets( oldfile, MAX_SIZE + 1, stdin );
	puts( "Enter the destination file name: " );
	fgets( newfile, MAX_SIZE + 1, stdin );

	remove_newline( oldfile );
	remove_newline( newfile );

	if ( copy_file( oldfile, newfile ) == 0 )
	{
		puts( "Copy operation successful" );
	}
	else
	{
		fprintf( stderr, "Error during copy operation\n" );
		exit( EXIT_FAILURE );
	}

	return 0;
}

void remove_newline( char *str )
{
	char *ptr = strchr( str, '\n' );
	int index = ptr - str;

	*( str + index ) = '\0';
}

int copy_file( char *old, char *new )
{
	FILE *old_f, *new_f;
	int c;

	if ( (old_f = fopen( old, "rb" )) == NULL || (new_f = fopen( new, "wb" )) == NULL )
	{
		return -1;
	}

	while( feof( old_f ) == 0 )
	{
		c = fgetc( old_f );
		fputc( c, new_f );	
	}

	fclose( old_f );
	fclose( new_f );

	return 0;
}