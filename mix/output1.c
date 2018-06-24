// Find the output of the program

#include <stdio.h>

int main()
{
	/*int a, b;
	
	a = -3 - -25;
	b = -3 - -(-3);
	printf("a = %d, b = %d\n", a, b);
	 */

	int j = 10, k = 12;

	if (k >= j) 
	{
		{
			k = j;
			j = k;
		}

		printf("k = %i, j = %i\n", k, j);
	}

	return 0;
}