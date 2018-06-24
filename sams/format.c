/* Demonstration of frequently used escape sequences */

#include <stdio.h>

#define QUIT 3

int get_menu_choice( void );
void print_report( void );


int main( void )
{
	int choice;

	do 
	{
		choice = get_menu_choice();

		if ( choice == 1 )
		{
			printf("\nBeeping the computer\a\a\a");
		}
		else if ( choice == 2 )
		{
			print_report();
		}
		else if ( choice == 3 )
		{
			puts ( "Quitting..." );
		}
		else
		{
			puts ( "Wrong input!" );
		}

	} while ( choice != QUIT );
	
	return 0;
}

int get_menu_choice( void )
{
	int ans;

	printf( "\n" );
	printf( "\n1 - Beep Computer" );
	printf( "\n2 - Display Report" );
	printf("\n3 - Quit");
	printf("\n");
	printf("\nEnter a selection: ");
	scanf( "%i", &ans );

	return ans;
}

void print_report( void )
{
	printf( "\nSAMPLE REPORT" );
	printf( "\n\nSequence\tMeaning" );
	printf( "\n=========\t=======" );
	printf( "\n\\a\t\tBell (alert)" );
	printf( "\n\\b\t\tBackspace" );
	printf( "\n\\f\t\tForm feed (used in printers)" );
	printf( "\n\\n\t\tNew line" );
	printf( "\n\\r\t\tCarriage return" );
	printf( "\n\\t\t\tHorizontal tab" );
	printf( "\n\\v\t\tVertical tab" );
	printf( "\n\\\t\tBackslash" );
	printf( "\n\\?\t\tQuestion mark" );
	printf( "\n\\\'\t\tSingle quotation" );
	printf( "\n\\\"\t\tDouble quotation" );
}