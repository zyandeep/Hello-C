/* Demo of passing pointer-to-a-function as a function argument */

#include <stdio.h>

void decide( void ( *ptr_func )( void ) );
void f1( void );
void f2( void );
void f3( void );

int main(void)
{
	int number;

	puts( "Enter a number between 1-10, 0 to quit" );
	while( 1 )
	{
		scanf( "%d", &number );

		if ( number == 0 )
		{
			return 0;
		}

		if ( number <= 4 )
			decide( f1 );
		else if ( number <= 8 )
			decide( f2 );
		else
			decide( f3 );
	}
}

void decide( void ( *ptr_func )( void ) )
{
	// Call the "pointed" function
	ptr_func();
}

void f1( void )
{
	puts( "Your number is between 1-4" );
}

void f2( void )
{
	puts( "Your number is between 5-8" );
}

void f3( void )
{
	puts( "Your number is something else" );
}