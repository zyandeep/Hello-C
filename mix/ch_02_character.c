/*
	printing and non-printing character representation in C
*/

#include <stdio.h>

int main(void)
{
	char a = 'A';
	char ai = 65;
	
	// char ao = '\0101';			 octal representation of 'A' 
	
	char ah = '\x41';			/* hex representation of 'A' */

	printf("Gramps sez, \" a \\ is blackslesh.\" \n");
	printf("ASCII code for %c is %d\n", a, a);

	// printf("This would be weired %c\n", 65);

	printf("ASCII code for %c is %o, %x\n", ai, ai, ai);
	// printf("ASCII code for %c is %o\n", ao, ao);
	printf("ASCII code for %c is %x\n", ah, ah);	

	return 0;
}
