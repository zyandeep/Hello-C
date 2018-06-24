#include <stdio.h>

int power, result;

void ask_input( void );
int calc_power( int exp );
void show_result( void );

int main( void )
{
	ask_input();

	result = calc_power( power );

	show_result();

	return 0;
}

void ask_input( void )
{
	puts( "\nEnter an integer power for base 3: " );
	scanf( "%d", &power );
}

int calc_power( int exp )
{
	if ( exp == 0 )
		return 1;

	if ( exp == 1 )
		return 3;

	return 3 * calc_power( --exp );
}

void show_result( void )
{
	printf( "\nValue of 3 to the power %d is: %d\n", power, result );
}