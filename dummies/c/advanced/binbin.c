/* printing in binary */

#include <stdio.h>

#define SIZE 36

char* bin_string(int n);

int main(void)
{
	unsigned int num;

	printf("Enter a positive integer: ");
	scanf("%u", &num);

	printf("Decimal value is: %u\n", num);
	printf("Hexadecimal value is: %#X\n", num);
	printf("Binary value is: %s\n", bin_string(num));
	printf("One's complement is: %s\n", bin_string(~num));
	
	return 0;
}

char* bin_string(int n)
{
	static char binary[SIZE];
	int i, j;

	for (i = 31, j = 0; i >= 0 && j < SIZE; i--, j++)
	{
		n & (1 << i) ? (binary[j] = '1') : (binary[j] = '0');

		if (i % 8 == 0)
			binary[++j] = ' ';
	}
	binary[j] = '\0';

	return binary;
}