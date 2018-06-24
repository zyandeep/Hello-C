/* bit wise left-shift operator */

#include <stdio.h>

int main(void)
{
	int number;
	int x, r;

	printf("Enter an integer value: ");
	scanf("%i", &number);
	
	for (x = 1; x <= 8; x++)
	{
		r = number << x;
		printf("%d << %d = %d\n", number, x, r);
	}	
	
	return 0;
}