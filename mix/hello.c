/*
	To store/represent a number in binary use --> 0b before the bits
	
	To store/represent a number in octal use --> 0 before the octal digits
		to print it in octal format use --> '%o' as the format specifier/placeholder

	To store/represent a number in hex use --> 0x before the hex digits
		to print it in hex format use --> '%x' or '%X' as the format specifier/placeholder
*/


#include <stdio.h>

int main(void)
{
	unsigned char my_data;

	// in binary
	my_data = 0b01000010;
	printf("ASCII value  = %d\n", my_data);
	printf("keyboard character  = %c\n", my_data);

	// in octal
	my_data = 041;
	printf("Decimal value  = %d\n", my_data);
	printf("octal value  = %o\n", my_data);

	// in binary
	my_data = 0xa2;
	printf("Decimal value  = %d\n", my_data);
	printf("hex value  = %x\n", my_data);
	printf("hex value  = %X\n", my_data);


	puts("Hello World!");
	printf("I am a tiny C Program\n");


	
	return 0;
}

