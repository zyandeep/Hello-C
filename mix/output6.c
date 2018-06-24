// Find the output of the program

#include <stdio.h>

int main()
{
	/*int i = -4, j, num ;
	
	j = ( num < 0 ? 0 : num * num ) ;
	printf ( "\n%d", j ) ;
	*/
	
	/*int j = 4 ;
	( !j != 1 ? printf ( "\nWelcome") : printf ( "\nGood Bye") ) ;*/

	/*int ji = 65 ;
	printf ( "\nji >= 65 ? %d : %c", ji ) ;    // no of format specifires = no of arguments*/

	/*int i = 10, j ;

	i >= 5 ? ( j = 10 ) : ( j = 15 ) ;
	printf ( "\n%d %d", i, j );*/

	/*int a = 5 , b = 6 ;
	( a == b ? printf( "%d",a) ) ;			// (? :) this pair is must*/

	/*int x = 10, y = 20 ;
	x == 20 && y != 10 ? printf( "True" ) : printf( "False" ) ;*/

	/*int code ;
	scanf ("%d", &code) ;

	(code > 1) ? printf ("\nJerusalem") : ((code < 1) ? printf ("\nEddie") : printf ("\nC Brain"));
	*/

	float sal ;

	printf ("Enter the salary" ) ;
	scanf ( "%f", &sal ) ;
	
	(sal < 40000 && sal > 25000) ? printf("Manager") : 
		((sal < 25000 && sal > 15000) ? printf("Accountant") : printf("Clerk"));

	
	return 0;
}