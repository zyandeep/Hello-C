#include <stdio.h>

void showbits (char);


int main(void)
{
	char input = 0;
	
	puts("Enter a character -->");
	input = getchar();
	
	puts("The binary bits are -- >");
	showbits (input);
	
	return 0;
}


void showbits (char number)
{
	// int i = 0;
	
	// for(; i <= 7; i++)
	// {
	// 	if (i == 4)
	// 		putchar(' ');
			
	// 	(number & (0b10000000 >> i)) ? printf("1") : printf("0");
			
	// }
	
	// puts(" ");

	int i = 1;
	unsigned char bitmask = 0b10000000;

	for (; i <= 8; i++, bitmask /= 2)
	{
		if (i == 5)
			putchar(' ');
		
		(number & bitmask) ? printf("1") : printf("0");
	}
	
	puts(" ");
	
	return;
}
