#include <stdio.h>

int main( void )
{
	int a;
	int *p;
	int b = 20;

	void *vp;			// generic pointer

	a = 10;
	p = &a;
	vp = p;

	/*printf( "%p\n", p );	
	printf( "%d\n", *p );	
	printf( "%p\n", &a );	

	printf( "a = %d\n", a );
	*p = 12;
	printf( "a = %d\n", a );
*/	
	printf( "Address at p = %p\n", p );
	printf( "Value at address = %d\n", *p );
	*p = b;
	printf( "Address at p = %p\n", p );
	printf( "Value at address = %d\n", *p );

	printf( "vp = %p\n", vp );
	printf( "Value at address vp, = %d\n", *(int*)vp );

	return 0;
}