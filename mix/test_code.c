/*
	Program that uses user-defined header files and libraries
	date: 07-09-2015 

	<> --> check for .h files in /usr/include (standard and os specific) 
		   or /usr/local/include (for 3rd party)
*/

#include <stdio.h>
#include <encrypt.h>
#include <checksum.h>


int main(void)
{
	char s[] = "Speak friend and enter";
	encrypt(s);
	printf("Encrypted to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));

	encrypt(s);
	printf("Decrypted back to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));

	return 0;
}
