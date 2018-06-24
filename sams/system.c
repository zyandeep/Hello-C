#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char display_menu( void );
void exec_cmd( char *command );


int main( void )
{
	char answer;

	do 
	{
		answer = display_menu();

		switch( answer )
		{	
			case 'l':
				exec_cmd( "pwd ; ls -lh" );
				break;

			case 'c':
				exec_cmd( "cal" );
				break;

			case 'p':
				exec_cmd( "ps -A | less" );
				break;

			case 's':
				exec_cmd( "df -hT" );
				break;

			case 'q':
				exit( EXIT_SUCCESS );

			default: 
				puts( "Please provide a valid option" );
		}

	} while( 1 );

	return EXIT_SUCCESS;
}

char display_menu( void )
{
	char ans;

	puts( "\n++++++++++++++++++++++++++++++++++++" );
	puts( "l - List the current directory" );
	puts( "c - Show this month's calander" );
	puts( "p - List all the current processes" );
	puts( "s - Show file system's disk useage" );
	puts( "q - Quit" );

	printf( "\nChose your option --> " );
	
	do 
	{
		ans = fgetc( stdin );

	} while( isblank( ans ) != 0 || ans == '\n' );

	return ans;
}

void exec_cmd( char *command )
{
	system( command );
}