/* setting bit with OR (|) */

#include <stdio.h>

int main(void)
{
	char input;

	printf("Enter a uppercase character: ");
	input = getchar();

	input |= 0x20;

	printf("Lowercase form: %c\n", input);
	
	return 0;
}