/* Demo of pointer to a function */

#include <stdio.h>

void decide( int n );
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

		decide( number );
	}
}

void decide( int n )
{
	// A function pointer declearation / defination
	void ( *ptr_func )( void );

	if ( n <= 4 )
		ptr_func = f1;
	else if ( n <= 8 )
		ptr_func = f2;
	else
		ptr_func = f3;

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