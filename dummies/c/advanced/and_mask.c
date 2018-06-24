/* Splitting a 16-bit value into half */

#include <stdio.h>

int main(void)
{
	/*unsigned short int number;
	unsigned char lower, upper;

	printf("Enter a four-digit hax value: ");
	scanf("%hx", &number);
	
	lower = number & 0x00FF;
	upper = (number & 0xFF00) >> 8;

	printf("%X is composed of %X and %X\n", number, upper, lower);*/

	unsigned int number;
	unsigned char p1, p2, p3, p4;

	printf("Enter a 8-digit hax value: ");
	scanf("%x", &number);

	p4 = number & 0x000000FF;
	p3 = (number & 0x0000FF00) >> 8;
	p2 = (number & 0x00FF0000) >> 16;
	p1 = (number & 0xFF000000) >> 24;
	
	printf("%X is composed of %X %X %X and %X\n", number, p1, p2, p3, p4);

	return 0;
}